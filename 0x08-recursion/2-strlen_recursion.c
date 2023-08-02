#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string
 * @s: A pointer to the string
 *
 * Return: It returns the length of the string
*/

int _strlen_recursion(char *s)
{
	int myCounter = 0;

	if (*s == '\0')
	{
		return (myCounter);
	}
	myCounter = myCounter + 1;
	return (myCounter + _strlen_recursion(s + 1));
}
