#include "main.h"

/**
* _strlen_recursion - function returns the length of a string
* @s: pointer to string
* Return: return length of string
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		return (i += _strlen_recursion(s + 1));
	}
	return (i++);
}
