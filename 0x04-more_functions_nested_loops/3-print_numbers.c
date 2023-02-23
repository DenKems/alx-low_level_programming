#include "main.h"

/**
* print_numbers - function that prints the numbers, from 0 to 9
* followed by a new line
*
* Return: 0 (Success)
*/
void print_numbers(void)
{
	char i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);
	i++;
	}
	_putchar("\n");
}
