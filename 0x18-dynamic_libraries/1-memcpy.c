#include "main.h"

/**
 * _memcpy - A function to copies some bytes from place to another
 * @dest: Pointer to dest chars
 * @src: Pointer to src chars
 * @n: Number of bytes to be copied
 * Description: Nothing
 * Return: Pointer to dest array
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *cdest = (char *) dest;
	char *csrc = (char *) src;

	for (i = 0; i < n; i++)
		cdest[i] = csrc[i];

	return (dest);
}
