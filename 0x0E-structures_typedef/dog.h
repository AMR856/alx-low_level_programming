#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - A struct that makes a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the owner
 *
 * Description: It's a struct that makes a dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
