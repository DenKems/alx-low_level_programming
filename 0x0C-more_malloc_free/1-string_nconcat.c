#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - function concatenates two strings
* @s1: pointer to first string
* @s2: pointer to second string
* @n: number of bytes from second string to concatenate to first string
* Return: returns pointer to new memory of s1 or NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, num1 = 0, num2 = 0;
	char *memory;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1 && s1[num1])
		num1++;

	while (s2 && s2[num2])
		num2++;

	if (n < num2)
		memory = malloc(sizeof(char) * (num1 + n + 1));
	else
		memory = malloc(sizeof(char) * (num1 + num2 + 1);

	if (memory == NULL)
		return (NULL);

	while (i < num1)
	{
		memory[i] = s1[i];
		i++;
	}

	while (n < num2 && i < (num1 + n))
		memory[i++] = s2[j++];

	while (n >= num2 && i < (num1 + num2))
		memory[i++] = s2[j++];

	memory[i] = '\0';

	return (memory);
}
