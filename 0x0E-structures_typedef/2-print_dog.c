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
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
