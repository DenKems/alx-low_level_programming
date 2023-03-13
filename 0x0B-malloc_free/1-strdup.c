#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - function returns a pointer to a new string
* which is a duplicate of the string str
* @str: pointer to string
* Return: returns pointer to a newly allocated space in memory or NULL
*/
char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	ptr = malloc(sizeof(char) * (j + 1));
	if (str == NULL || ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
