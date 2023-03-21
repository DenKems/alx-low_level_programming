#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* print_dog - function prints a 'struct dog' type
* @d: pointer to 'struck dog' variable to print
* Return: reurns nothing
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s", d->name);
	}

	if (d->age == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Age: %f", d->age);
	}

	if (d->owner == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Owner: %s", d->owner);
	}
}
