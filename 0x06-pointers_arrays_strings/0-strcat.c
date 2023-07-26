#include "main.h"

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
 * _strcat - A function that concatenates two strings together
 * @dest: The first string
 * @src: The second string that has to concatenated with
 * the first one
 * Return: It returns a pointer to the beginning of the
 * concatenated string
*/

char *_strcat(char *dest, char *src)
{
	char *ptr = dest + _strlen(dest);

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
