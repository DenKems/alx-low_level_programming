#include "main.h"

/**
* print_alphabet_x10 - This program alphabets in lowercase
* 10 times
*/
void print_alphabet_x10(void)
{
	int num;
	char abc;

	for (num = 1; num <= 10; num++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
			{
			_putchar(abc);
			}
		_putchar('\n');
	}
}
