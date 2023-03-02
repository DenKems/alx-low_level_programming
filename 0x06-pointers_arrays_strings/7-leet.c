#include "main.h"

/**
* leet - function  that encodes a string into 1337,
* changes some letters in the string to numbers.
* @abc: string
* Return: return a character type string
*/
char *leet(char *abc)
{
	int i;
	int j;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (i = 0; abc[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (abc[i] == str1[j])
			{
				abc[i] = str2[j];
			}
		}
	}
	return (abc);
}
