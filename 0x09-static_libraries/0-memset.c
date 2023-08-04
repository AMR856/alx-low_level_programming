#include "main.h"

/**
 * _memset - a function to set some memory locations to a specfic value
 * @s: Pointer to the array
 * @b: The value that we want to set to
 * @n: The number of bytes that we want to use
 * Description: Nothing
 * Return: pointer to the array
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n != 0)
	{
		*p = (unsigned char) b;
		p = p + 1;
		n = n - 1;
	}
	return (s);
}
