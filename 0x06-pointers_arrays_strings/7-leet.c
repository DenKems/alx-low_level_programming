#include "main.h"

/**
* leet - function  that encodes a string into 1337,
* changes some letters in the string to numbers.
* @abc: string
* Return: return a character type string
*/
char *leet(char *abc)
{
	int i = 0;
	int j = 0;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	while (abc[i] != '\0')
	{
		i++;
		while (j < 10)
		{
			if (abc[i] == str1[i])
			{
				abc[i] = str2[i];
			}
			j++;
		}
	}
	return (abc)
}
