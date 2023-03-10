#include "main.h"

/**
* _memcpy - function copies memory area.
* @dest: pointer to dest(destination of the copied memory)
* @src: pointer to src(source of the copied memory)
* @n: number of bytes of memory to be copied)
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
