#include "main.h"
#include <stdlib.h>

char *make_buffer(char *doc);
void close_doc(int fildes);

/**
* make_buffer - function reserves 1024 bytes for buffer
* @doc: name of file
* Return: returns pointer to newly allocated buffer
*/
char *make_buffer(char *doc)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", doc);
		exit(99);
	}
	return (buffer);
}


/**
* close_doc - function closes file descriptor
* @fildes: file descriptor to close
* Return: returns nothing
*/
void close_doc(int fildes)
{
	int i;

	i = close(fildes);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fildes);
		exit(100);
	}
}


/**
* main - program copies the content of a file to another file
* @argc: number of arguments called to the program
* @argv: array of pointer to the argument
*
* Return: 0 on Success
*
* Description:
* Incorrect - exit code 97.
* If file_from does not exist or cannot be read - exit code 98.
* If file_to cannot be created or written to - exit code 99.
* If file_to or file_from cannot be closed - exit code 100
*
* buffer: pointer to from_file
*/
int main(int argc, char *argv[])
{
	char *buffer;
	int i, j, wcount, rcount;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = make_buffer(argv[2]);
	i = open(argv[1], O_RDONLY);
	rcount = read(i, buffer, 1024);
	j = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (i == -1 || rcount == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wcount = write(j, buffer, rcount);
		if (j == -1 || wcount == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rcount = read(i, buffer, 1024);
		j = open(argv[2], O_WRONLY | O_APPEND);
	} while (rcount > 0);

	free(buffer);
	close_doc(i);
	close_doc(j);

	return (0);
}













