#include "main.h"

/**
* puts_half - function that prints half of a string, followed by a new line
* @str: string
* Return: nothing
*/
void puts_half(char *str)
{
	int a;
	int n;
	int lg;

	lg = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		lg++;
	}

	n = (lg / 2);

	if ((lg % 2) == 1)
	{
		n = ((lg + 1) / 2);
	}

	for (a = n; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
