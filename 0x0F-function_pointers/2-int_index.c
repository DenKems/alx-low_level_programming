#include "function_pointers.h"
#include <stdio.h>

/**
* int_index - function searches for an integer in an array
* @array: pointer to array
* @size: number of elements in array
* @cmp: function pointer
* Return: returns -1(if fail)
* Other integer value if successful
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
