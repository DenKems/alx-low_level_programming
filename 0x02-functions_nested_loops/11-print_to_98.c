#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - This function prints all natural from 'n' to 98
 * @n: Number passed into the function
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
