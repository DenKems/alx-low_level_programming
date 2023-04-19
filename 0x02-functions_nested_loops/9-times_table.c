#include "main.h"

/**
* times_table - This function prints out the 9 times table
*/
void times_table(void)
{
	int i, j, num;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			num = j * i;
			if (j != 0)
			{
				_putchar(',');
				if (num < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}

			if (num < 10)
				_putchar(num + '0');
			else
			{
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			}

			if (j == 9)
				_putchar('\n');
		}
	}
}
