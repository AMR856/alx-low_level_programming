#include "main.h"

int check_palindrome(char*, int, int);
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
 * is_palindrome - A function that checks if a string is palindrome
 * @s: The string to be checked
 *
 * Return: 1 or 0 (1 is palindrome and 0 is not)
*/

int is_palindrome(char *s)
{
	int strLength;

	strLength = _strlen(s);
	return (check_palindrome(s, 0, strLength - 1));
}

/**
 * A functino to checks if the string is
 * palindrome using recursion
 * @s: The string to be checked
 * @left: The left index of the start
 * @right: The end of the string
 *
 * Return: 1 or 0 (1 is palindrome and 0 is not)
*/
int check_palindrome(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	else if (s[left] == s[right])
	{
		return (check_palindrome(s, left + 1, right - 1));
	}
	else
		return (0);
}
