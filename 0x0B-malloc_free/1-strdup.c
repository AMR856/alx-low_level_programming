#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - A function that creates a new array using DMP
 * and it copies the contents of a given string to the new
 * array that is allocated dynamically
 * @str: Pointer to the given string
 *
 * Return: A pointer to the new allocated array or NULL
*/

char *_strdup(char *str)
{
	unsigned int i;

	if (str != NULL)
	{
		char *newArray = (char *)malloc(strlen(str) * sizeof(char) + 1);

		if (newArray == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < strlen(str); i++)
				strcpy((newArray + i), (str + i));
			return (newArray);
		}
	}
	else
	{
		return (NULL);
	}
}
