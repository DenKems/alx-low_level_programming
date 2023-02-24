#include "main.h"

/**
* more_numbers - Function  prints 10 times the numbers
*  from 0 to 14, followed by a new line
* Return: 0 (Success)
*/
void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 48; j < 62; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		_putchar();
	}
}
