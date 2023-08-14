#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - A function to create a dog variable dynamically
 * @name: The name of the created dog
 * @age: The age of the created dog
 * @owner: The name of the owner of the created dog
 *
 * Return: It returns a pointer to the newly created object
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	if (name != NULL && owner != NULL)
	{
		dog_t *myNewDog = (dog_t *)malloc(sizeof(dog_t));

		if (myNewDog == NULL)
			return (NULL);

		myNewDog->name = (char *)malloc(strlen(name) + 1);
		if (myNewDog->name == NULL)
		{
			free(myNewDog);
			return (NULL);
		}
		myNewDog->owner = (char *)malloc(strlen(owner) + 1);
		if (myNewDog->owner == NULL)
		{
			free(myNewDog->name);
			free(myNewDog);
			return (NULL);
		}
		strcpy(myNewDog->name, name);
		myNewDog->age = age;
		strcpy(myNewDog->owner, owner);
		return (myNewDog);
	}
	else
	{
		return (NULL);
	}
}
