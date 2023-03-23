#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
* sum_them_all - function returns the sum of all its parameters
* @n: number of parameters
* Return: returns sum of parameters or 0
*/
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, const unsigned int);
	}

	va_end(list);

	return (sum);
}
