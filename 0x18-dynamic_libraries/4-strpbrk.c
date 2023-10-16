#include "main.h"

/**
 * _strpbrk - A function to get the first occurance
 * of some chars
 * @s: Pointer to the main string
 * @accept: The substring to be compared
 * Description: Nothing
 * Return: A pointer to the first occurance
*/

char *_strpbrk(char *s, char *accept)
{
	const char *p;
	char *result = NULL;

	if (s == NULL || accept == NULL)
		return (NULL);
	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0')
		{
			if (*p == *s)
			{
				result = s;
				return (result);
			}
			p++;
		}
		s = s + 1;
	}
	return (result);
}
