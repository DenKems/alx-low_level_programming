#include "main.h"

/**
* print_sign - This function prints the sign of a number
* @n: This is the number
* Return: Returns 1 if greater that zero
*         Returns 0 if equal to zero
*         Returns -1 if less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (10);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
