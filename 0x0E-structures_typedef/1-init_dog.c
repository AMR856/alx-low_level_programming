#include "dog.h"

/**
 * init_dog - A function to initialize variables
 * @d: Pointer to a variable of type dog
 * @name: The name that we want to use
 * @age: The age that we want to use
 * @owner: The name of the owner that we want to use
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
