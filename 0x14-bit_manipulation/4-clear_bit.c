#include "main.h"

/**
* clear_bit - function sets the value of a bit to 0 at a given index
* @n: number
* @index: the nth bit to set to 0
* Return: 1(Success) or -1 (Failure)
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (!n || index > 63)
		return (-1);

	i = 1 << index;

	*n = ((~i) & *n);

	return (1);
}

