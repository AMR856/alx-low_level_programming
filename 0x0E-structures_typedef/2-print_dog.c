#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - A function to print dog's variables
 * @d: A pointer to a dog variable
 *
 * Return: It returns void (Nothing)
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
			printf("Name: nil\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if ((*d).owner == NULL)
			printf("Owner: nil\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
