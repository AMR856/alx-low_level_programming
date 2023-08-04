#include "main.h"

/**
 * _isalpha - A function that check if char is alphabet
 * @c: The char to be checked
 * Description: This function uses a method of checking
 * ASCII values using if condition
 * Return: It returns 1 if alpha and 0 if anything else
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
