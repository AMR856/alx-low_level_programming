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
 * rev_string - A function that reverses the string
 * @s: The string to be reversed
 * Description: This function loops through half of the string
 * and it does a swap between the first half and the second half
 * Return: It returns void (Nothing)
*/

void rev_string(char *s)
{
	int strLength, i, temp;

	strLength = _strlen(s);
	for (i = 0; i < strLength / 2; i++)
	{
		temp = s[i];
		s[i] = s[strLength - i - 1];
		s[strLength - i - 1] = temp;
	}
}
