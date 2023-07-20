#include "main.h"

/**
 * _isupper - A function that checks if the letter is uppercase or not
 * @c: The letter to be checked
 * Description: It uses ascii table values and if condition
 * to check whether the number is uppercase or not
 * Return: It returns 1 if the number is uppercase
 * and 0 anything else
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
