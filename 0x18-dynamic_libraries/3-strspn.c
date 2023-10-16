#include "main.h"

/**
 * _strspn - A function to count substring from a string
 * @s: Pointer to the main string
 * @accept: The substring to be compared
 * Description: Nothing
 * Return: The number of the chars that match
*/

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	const char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0')
		{
			if (*p == *s)
			{
				count = count + 1;
				break;
			}
			p++;
		}
		if (*p == '\0')
			return (count);
		s = s + 1;
	}
	return (count);
}

