#include "main.h"
#include <stdlib.h>

/**
* _calloc -  allocates memory for an array, using malloc
* and memory set to zero
* @nmemb: number of array elements
* @size: bytes
* Return: returns pointer to the allocated memory or NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *memory;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	memory = malloc(nmemb * size);

	if (memory == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		memory[i] = 0;
	}

	return (memory);
}
