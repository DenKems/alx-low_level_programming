#include "main.h"

/**
* append_text_to_file - function appends text at the end of a file
* @filename: the name of the file
* @text_content: the NULL terminated string to add at the end of the file
*
* Return: returns 1(Success) or -1(Failure)
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fildes;
	int i = 0;
	int count;

	if (!filename)
		return (-1);

	fildes = open(filename, O_WRONLY | O_APPEND);
	if (fildes == -1)
		return (-1);

	while (text_content[i])
	{
		i++;
	}

	count = write(fildes, text_content, i);
	if (count == -1)
		return (-1);

	close(fildes);

	return (1);
}
