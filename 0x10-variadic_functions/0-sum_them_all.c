#include "variadic_functions.h"
#include <stdarg.h>i

/**
* sum_them_all - function returns the sum of all its parameters
* @n: number of parameters
* Return: returns sum of parameters or 0
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return (sum);
}
