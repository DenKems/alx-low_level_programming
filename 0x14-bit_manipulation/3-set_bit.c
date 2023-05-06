#include "main.h"

/**
* set_bit - function sets the value of a bit to 1 at a given index
* @n: integer
* @index: the nth value of bit to set to 1
* Return: returns 1(Success) or -1(failure)
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (!n || index > 63)
		return (-1);

	i = 1 << index;

	*n = (*n | i);

	return (1);
}

