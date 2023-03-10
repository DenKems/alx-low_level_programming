#include "main.h"

/**
*  _memset -  function that fills memory with a constant byte.
* @s: pointer
* @b: value to enter
* @n: number of bytes of memory
* Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
