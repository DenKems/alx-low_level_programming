#include "main.h"

/**
* rev_string - function that reverses a string
* @s: String to be reversed
* Return: nothing
*/
void rev_string(char *s)
{
	char rv = s[0];
	int c = 0;
	int i;

	while (s[0] != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i++)
	{
		c--;
		rv = s[i];
		s[i] = s[c];
		s[c] = rv;
	}
}
