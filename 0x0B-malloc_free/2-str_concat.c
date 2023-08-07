#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - A function that concatenates two strings
 * @s1: A pointer to the first string
 * @s2: A pointer to the second string
 *
 * Return: It returns a pointer to the new allocated array
 * or a NULL pointer
*/
char *str_concat(char *s1, char *s2)
{
	char *newArray = (char *)malloc(strlen(s1) + strlen(s2) + 1);

	if (newArray != NULL)
	{
		if (s1 == NULL)
		{
			strcpy(newArray, "");
			strcat(newArray, s2);
			return (newArray);
		}
		else if (s2 == NULL)
		{
			strcpy(newArray, s1);
			strcat(newArray, "");
			return (newArray);
		}
		else 
		{
			strcpy(newArray, s1);
			strcat(newArray, s2);
			return (newArray);
		}
	}
	else
	{
		return (NULL);
	}
}
