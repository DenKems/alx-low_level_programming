#include "main.h"

/**
* _strchr - function that locates a character in a string
* @s: pointer to a string
* @c: character
* Return: pointer to the first occurrence
* of the character c in the string s, or NULL
*/
char *_strchr(char *s, char c)
{
	int i;

	while (i = 0; s != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++
	}
	return (NULL);
}
