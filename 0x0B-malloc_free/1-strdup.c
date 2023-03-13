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

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	ptr = malloc(sizeof(char) * (i + 1));
	if (str == NULL || ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j]; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
