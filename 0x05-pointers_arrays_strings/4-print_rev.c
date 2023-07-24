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
 * print_rev - A function that prints a string in reverse
 * @s: A string to be printed in reveres order
 * Description: This function uses a method of looping
 * backward by knowing the end of the string and after that
 * decreasing the counter by 1
 * Return: It returns void (Nothing)
*/

void print_rev(char *s)
{
	int strLength, i;

	strLength = _strlen(s);
	for (i = strLength; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
