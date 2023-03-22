#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - prints a name using callback
* @name: name to be printed
* @f: function pointer
* Return: returns nothing
*/
void print_name(char *name, void (*f)(char *)) /* function prototype */
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}
