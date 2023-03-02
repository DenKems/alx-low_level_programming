#include "main.h"

/**
* cap_string - function that capitalizes all words of a string.
* @abc: pointer of string
* Return: Return character
*/
char cap_string(char *abc)
{
	int i;

	i = 0;
	while (abc[i])
	{
		while (!(abc[i] >= 'a' && abc[i] <= 'z'))
		{
			i++;
		}
		if (abc[i - 1] == ' ' ||
		    abc[i - 1] == '\t' ||
		    abc[i - 1] == '\n' ||
		    abc[i - 1] == ',' ||
		    abc[i - 1] == ';' ||
		    abc[i - 1] == '.' ||
		    abc[i - 1] == '!' ||
		    abc[i - 1] == '?' ||
		    abc[i - 1] == '"' ||
		    abc[i - 1] == '(' ||
		    abc[i - 1] == ')' ||
		    abc[i - 1] == '{' ||
		    abc[i - 1] == '}' ||
		    i == 0)
		{
			abc[i] = abc[i] - 32;
		}
		i++;
	}
	return (abc);
}
