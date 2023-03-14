#include "main.h"
#include <stdlib.h>
/**
* argstostr - function that concatenates all the arguments of your program
* @ac: integer for argument count
* @av: double pointer of a string array
* Return: returns pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	int i, j, k;
	int a, x = 0;
	char *allconcat;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			x++;
		}
	}
	x += ac;

	allconcat = malloc(sizeof(char) * x + 1);

	if (allconcat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k]; k++)
		{
			allconcat[a] = av[i][k];
			a++;
		}
	}
	if (allconcat[a] == '\0')
	{
		allconcat[a++] = '\n';
	}
	return (allconcat);
}
