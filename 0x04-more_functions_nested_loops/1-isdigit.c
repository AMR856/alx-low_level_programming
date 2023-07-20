#include "main.h"

/**
 * _isdigit - A function to check if the integer
 * is digit or not
 * @c: The integer to be checked
 * Description: This function checks if the integer
 * is a digit using ASCII values and an if condition
 * Return: It returns 1 if the intger is digit and 0
 * if anything else
*/

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
