#include "main.h"

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
	for (; *haystack; haystack++)
	{
		char *ptr1 = haystack;
		char *ptr2 = needle;

		while (*ptr1 == *ptr2 && *ptr2 != '\0')
		{
			ptr1 = ptr1 + 1;
			ptr2 = ptr2 + 1;
		}
		if (*ptr2 == '\0')
			return (haystack);
	}
	return (NULL);
}
