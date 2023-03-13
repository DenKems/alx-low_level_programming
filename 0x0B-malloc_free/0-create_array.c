#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - function creates an array of chars,
* and initializes it with a specific char
* @size: number of byte
* @c: character variable
* Return: returns pointer to the array or NULL
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	ar = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		ar[i] = c;
		i++;
	}

	return (ar);
}
