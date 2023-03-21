#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* _strlen - function returns length of a string
*@s: string
*Return: returns length of string
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
* _strcpy - function copies one to another string
* @dest: destination string
* @src: where to copy string from
*Return: returns destination string
*/
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}

/**
* new_dog - function creates new dog information
* @name: name of dog
* @age: age of dog
* @owner: name of owner
* Return: returns nothing
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *size;

	i = _strlen(name);
	j = _strlen(owner);

	size = malloc(sizeof(dog_t));

	if (size == NULL)
	{
		return (NULL);
	}

	size->name = malloc(sizeof(char) * (i + 1));
	if (size->name == NULL)
	{
		free(size);
		return (NULL);
	}

	size->owner = malloc(sizeof(char) * (j + 1));
	if (size->owner == NULL)
	{
		free(size);
		free(size->name);
		return (NULL);
	}

	_strcpy(size->name, name);
	_strcpy(size->owner, owner);
	size->age = age;

	return (size);
}
