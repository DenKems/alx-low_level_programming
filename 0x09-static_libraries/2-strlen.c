#include "main.h"

/**
* _strlen - function that returns the length of a string
* @s: string
* Return: length of string
*/
int _strlen(char *s)
{
	int lg = 0;

	while (*s != '\0')
	{
		lg++;
		s++;
	}
	return (lg);
}
