#include "main.h"

/**
 * malloc_checked - A function to allocated memory safely
 * @b: Size of the allocated memory
 *
 * Return: It returns a void pointer to the allocated
 * memory
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
