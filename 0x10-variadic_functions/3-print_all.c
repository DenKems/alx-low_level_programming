#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - function prints anything
* @format: list of types of arguments passed to the function
* Return: void
*/
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char *str;
	char *separator = "";

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");

	va_end(list);
}

