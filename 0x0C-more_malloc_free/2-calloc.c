#include "main.h"

/**
 * _calloc - A function to work as calloc using malloc
 * @nmemb: Number of elements to be put in the array
 * @size: Size of each element in the array
 *
 * Return: it returns a pointer to the newly
 * allocated array or NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *bytePtr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	bytePtr = ptr;

	for (i = 0; i < nmemb * size; i++)
	{
		bytePtr[i] = 0;
	}
	return (ptr);

}
