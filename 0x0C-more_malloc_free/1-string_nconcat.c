#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - A function to concatenate two strings
 * @s1: A pointer to the first string
 * @s2: A pointer to the second string
 * @n: Number of chars to be concatenated
 *
 * Return: It returns a pointer to the new
 * allocated array or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);

	result = (char *)malloc((len1 + n + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strncat(result, s2, n);

	result[len1 + n] = '\0';

	return (result);
}
