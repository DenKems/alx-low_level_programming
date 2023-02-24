#include "main.h"

/**
* print_line- Function draws a staight line
* in the terminal
* @n: number of times the character _ should be printed
* Return: 0 (Success)
*/
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n, i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
