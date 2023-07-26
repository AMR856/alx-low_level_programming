#include "main.h"
#include <stddef.h>
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

/**
 * _strlen - A function to get the length of string
 * @s: The pointer to the string
 * Description: This function loops through
 * the string until it finds a null termintor and
 * in each char that is not a null it increments the
 * counter by 1
 * Return: The length of the string
*/

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*s != '\0')
	{
		s++;
		counter++;
	}
	return (counter);
}

/**
 * string_toupper - A function that converts lowercase letters to uppercase
 * @src: The string to be converted
 * Description: This function converts a lowercase letter to uppercase
 * by subtracting 32
 * Return: Retruns a pointer to string that contains uppercase letters
*/

char *string_toupper(char *src)
{
	char *ptr;
	int strLength, i;
	char s[1000000];

	strLength = _strlen(src);

	for (i = 0; i < strLength; i++)
	{
		if (src[i] >= 'a' && src[i] <= 'z')
		{
			src[i] = src[i] - 32;
		}
	}
	ptr = _strcpy(s, src);
	return (ptr);
}

