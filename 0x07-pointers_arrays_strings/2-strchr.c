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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s = s + 1;
	}
	return (NULL);
}
