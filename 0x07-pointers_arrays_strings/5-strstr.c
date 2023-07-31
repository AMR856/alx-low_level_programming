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
 * _strstr - This function checks if a substring
 * can be found in another string
 * @haystack: The string we search in
 * @needle: The string we search for
 * Description: Nothing
 * Return: A Pointer to the beginning of located
 * string
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int len = _strlen(haystack) - _strlen(needle) + 1;

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < _strlen(needle); j++)
		{
			if (haystack[i + j] != needle[j])
				break;
			if (j == _strlen(needle) - 1)
				return (haystack + i);
		}

	}
	return (NULL);

}
