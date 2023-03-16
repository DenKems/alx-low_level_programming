#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - function allocates memory using malloc
* @b: number of memory blocks
* Return: returns pointer to the allocated memory or 98
*/
void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);

	if (memory == NULL)
	{
		exit(98);
	}

	return (memory);
}

