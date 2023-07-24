#include "main.h"

/**
 * _strcpy - A function to copy a string from src to dest
 * @dest: The string that you want to copy to
 * @src: The string that you want to copy from
 * Description: This function loops through the src
 * and dest copies everything from src to dest until
 * it reaches a null terminator which means the end
 * of the string
 * Return: It returns a pointer to the beginning
 * of the dest string
*/

char *_strcpy(char *dest, char *src)
{
	char *resultPtr;

	resultPtr = dest;
	if (dest == NULL)
		return (NULL);
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (resultPtr);
}
