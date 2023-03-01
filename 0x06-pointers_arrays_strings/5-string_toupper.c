#include "main.h"

/**
* string_toupper - function that changes all lowercase letters
* of a string to uppercase.
* @abc: pointer of string
* Return: character
*/
char *string_toupper(char *abc)
{
	int i;

	i = 0;
	while (abc[i] != '\0')
	{
		if (abc[i] >= 'a' && abc[i] <= 'z')
		{
			abc[i] = abc[i] - 32;
		}
		i++;
	}
	return (abc);
}
