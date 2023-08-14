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
	char nameCopy[10000];
	char ownerCopy[10000];

	dog_t *myNewDog = (dog_t *)malloc(sizeof(dog_t));

	if (myNewDog == NULL)
		return (NULL);

	strcpy(nameCopy, name);
	strcpy(ownerCopy, owner);

	myNewDog->name = name;
	myNewDog->age = age;
	myNewDog->owner = owner;

	return (myNewDog);
}
