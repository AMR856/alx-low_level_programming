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
 * puts_half - A function that prints the second half of a string
 * @str: The string to be printed
 * Description: This function first calcultes the length
 * of the string and after that it checks if it is
 * odd or even and depending on the previous condition
 * it determines its loop
 * Return: It returns void (Nothing)
*/

void puts_half(char *str)
{
	int strLength, i;

	strLength = _strlen(str);
	if (strLength % 2 == 0)
	{
		for (i = strLength / 2; i < strLength; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (strLength - 1) / 2; i < strLength; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
