#include "main.h"

/**
 * _strchr - A function to find a char in a string
 * @s: Pointer to the string
 * @c: The char to be found
 * Description: Nothing
 * Return: Pointer to the first place where we found
 * the required char
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s[i]);
	}
	return (NULL);
}
