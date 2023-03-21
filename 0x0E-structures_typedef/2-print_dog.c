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
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	if (d->age == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}

	if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
