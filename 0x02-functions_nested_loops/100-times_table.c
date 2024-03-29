#include "main.h"
/**
* print_times_table - function prints the n times table, starting with 0
* @n: the nth type of timetable to print
* Return: returns nothing
*/
void print_times_table(int n)
{
	int i, j, num;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			num = i * j;
			if (j != 0)
			{
				_putchar(',');
				if (num < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(num + '0');
				}
				else if (num >= 10 && num < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(num / 10 + '0');
					_putchar(num % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(num / 100 + '0');
					_putchar((num % 100) / 10 + '0');
					_putchar((num % 100) % 10 + '0');
				}
			}
			else
				_putchar(num + '0');
			if (j == n)
				_putchar('\n');
		}
	}
}

