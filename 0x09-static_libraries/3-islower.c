#include "main.h"

/**
* _islower - This program checks for lowercase characters
* @c: This the character
* Return: Returns 1 if lower and 0 if not
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
