#include "main.h"

/**
* _strncpy - Function that copies a string
* @dest: string to copy to
* @src: string to copy from
* @n: number of characters to be copied
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
