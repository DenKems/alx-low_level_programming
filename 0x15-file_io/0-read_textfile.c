#include "main.h"

/**
* read_textfile - function reads a text file and prints it to
* the POSIX standard output.
* @filename: name of file
* @letters: number of letters to read and print
* Return: actual number of letters it could read and print or 0 if failed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fildes;
	ssize_t rcount, wcount;

	if (!filename)
		return (0);

	fildes = open(filename, O_RDONLY);

	if (fildes == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));

	if (!buffer)
		return (0);

	rcount = read(fildes, buffer, letters);

	wcount = write(STDOUT_FILENO, buffer, rcount);

	close(fildes);

	free(buffer);

	return (wcount);
}
