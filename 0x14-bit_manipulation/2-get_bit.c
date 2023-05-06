#include "main.h"

/**
* get_bit - function returns the value of a bit at a given index
* @n: integer
* @index: the nth value of the binary to return
* Return: value of given bit or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (!n || index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
