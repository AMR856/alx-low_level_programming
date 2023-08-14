#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dog - A function to free dogs
 * @d: A pointer to a dog object
 *
 * Return: It returns void (Nothing)
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL && d->owner != NULL)
		{
			free(d->name);
			free(d->owner);
			free(d);
		}
	}
}
