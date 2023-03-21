#include <stdlib.h>
#include "dog.h"

/**
* free_dog - function frees memory
* @d: pointer variable of 'dog_t' type
*Return: returns nothing
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
