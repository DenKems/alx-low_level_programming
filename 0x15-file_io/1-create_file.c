#include "main.h"

/**
* create_file - function creates a file
* @filename: name of file
* @text_content: content to write in the file
*
* Return: returns 1(Success) or -1(Failure)
*/
int create_file(const char *filename, char *text_content)
{
	int fildes;
	int  i;
	int  count;

	if (!filename)
		return (-1);

	fildes = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fildes == -1)
		return (-1);

	i = 0;
	while (text_content[i])
	{
		i++;
	}

	if (!text_content)
		text_content = "";

	count = write(fildes, text_content, i);
	if (count == -1)
		return (-1);

	close(fildes);

	return (1);
}
