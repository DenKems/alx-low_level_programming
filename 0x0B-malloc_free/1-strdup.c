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

	ptr = malloc(sizeof(str));
	if (str == NULL || ptr == NULL)
	{
		return (NULL);
	}

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i <= j; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
