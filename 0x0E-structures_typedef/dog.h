#ifndef DOG_H
#define DOG_H

/**
* struct dog - dogs information
* @name: name of dog
* @age: dog's age
* @owner: name of owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog doggie;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
