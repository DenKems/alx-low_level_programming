#include "main.h"

/**
* print_rev -  function that prints a string, in reverse
* followed by a new line.
* @s: string to be printed in reverse
* Return: nothing
*/
void print_rev(char *s)
{
	int lg = 0;
	int n;

	while (*s != '\0')
	{
		lg++;
		s++;
	}
	s--;
	for (n = lg; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
