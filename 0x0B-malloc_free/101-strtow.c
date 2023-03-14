#include "main.h"
#include <stdlib.h>
/**
* num_words -function counts number of words in string
* @s: pointer to string
* Return:returns  number of words
*/
int num_words(char *s)
{
	int a, i, num;

	a = 0;
	num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			num++;
		}
	}
	return (num);
}


/**
* strtow - function splits a string into words
* @str: pointer to string
* Return: returns pointer to an array of strings or NULL
*/
char **strtow(char *str)
{
	int i, k = 0, l = 0, count, j = 0, first, last;
	char **split, *astr;

	while (*(str + l))
		l++;

	count = num_words(str);
	if (count == 0)
		return (NULL);

	split = (char **) malloc(sizeof(char *) * (count + 1));

	if (split == NULL)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				last = i;
				astr = (char *) malloc(sizeof(char) * (j + 1));

				if (astr == NULL)
					return (NULL);

				while (first < last)
					*astr++ = str[first++];
				*astr = '\0';

				split[k] = astr - j;
				k++;
				j = 0;			}
		}
		else if (j++ == 0)
			first = i;
	}
	split[k] = NULL;
	return (split);
}

