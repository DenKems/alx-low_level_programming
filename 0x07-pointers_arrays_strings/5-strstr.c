#include "main.h"

/**
* _strstr - function that locates a substring
* @haystack: pointer to first string
* @needle: pointer to second string
* Return: pointer to the beginning of the located substring, or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}

