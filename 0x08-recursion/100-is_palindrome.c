#include "main.h"
#include <string.h>

int check_palindrome(char*, int, int);

/**
 * is_palindrome - A function that checks if a string is palindrome
 * @s: The string to be checked
 *
 * Return: 1 or 0 (1 is palindrome and 0 is not)
*/

int is_palindrome(char *s)
{
	int strLength;

	strLength = strlen(s);
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
