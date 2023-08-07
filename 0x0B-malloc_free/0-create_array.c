#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that uses DMA to make
 * an array of chars
 * @size: The size of allocated array
 * @c: The char that we want to set array elements to
 *
 * Return: It returns a pointer to the base address
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size > 0)
	{
		char *myArray = (char *)malloc(size * sizeof(char));

		if (myArray == NULL)
			return (NULL);
		else
		{
			for (i = 0; i < size; i++)
				*(myArray + i) = c;
			return (myArray);
		}
	}
	else
		return (NULL);
}
