#include "main.h"

/**
 * _strncat - A function that concatenates two strings together
 * @dest: The first string
 * @src: The second string that has to concatenated with
 * the first one
 * @n: The number of chars to be concatenated
 * Return: It returns a pointer to the beginning of the
 * concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest + _strlen(dest);

	while (*src != '\0' && n != 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n = n - 1;
	}
	*ptr = '\0';
	return (dest);
}
