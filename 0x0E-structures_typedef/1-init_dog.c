#include <stdlibh>
#include "dog.h"

/**
* init_dog - function initialize a variable of type struct dog
* @d: pointer to initialize
* @name: name to be initialized
* @age: age to be initialized
* @owner: name of owner to be initialized
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
