#include "main.h"
#include <stddef.h>
/**
 * _strncpy - A function to copy a string from src to dest
 * @dest: The string that you want to copy to
 * @src: The string that you want to copy from
 * @n: The number of chars to be copied
 * Description: This function loops through the src
 * and dest copies everything from src to dest until
 * it reaches a null terminator which means the end
 * of the string
 * Return: It returns a pointer to the beginning
 * of the dest string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i = i + 1;
	}
	return (dest);
}
