#include "main.h"

/**
*  _sqrt_recursion - function returns the natural square root of a number
* @n: number of which the sqaure root is calculated
* Return: returns natural square root or -1
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (pre_sqrt_recursion(n, 0));
}

/**
* pre_sqrt_recursion -function finds the square root of n
* @n: Integer to find square root of
* @i: sqaure root numbers to try
* Return: returns square root or -1
*/
int pre_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (pre_sqrt_recursion(n, i + 1));
}
