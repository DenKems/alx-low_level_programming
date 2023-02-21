#include "main.h"

/**
*print_alphabet- This program prints alphabets
* in lowercase follwed by a new line
*/
void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar(abc);
	}
	_putchar('\n');
}
