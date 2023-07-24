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
