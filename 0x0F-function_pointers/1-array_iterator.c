#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - function executes a function given as a parameter on
* each element of an array
* @array: pointer to the array
* @size: number of element in array
* @action: pointer to the function given as parameter
* Return: returns nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
