#include "main.h"
#include <stdlib.h>

/**
* array_range - function creates an array of integers
* @min: minimum value
* @max: maximum value
* Return: returns pointer to the newly created array or NULL
*/
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	int n = (max - min) + 1;

	array = malloc(sizeof(int) * n);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= n; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
