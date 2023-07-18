#include "main.h"

/**
 * _islower - A function that checks if a char is lowercase or not
 * @c: The char to be checked
 * Description: This function method to check is ASCII code
 * and its values
 * Return: It returns 1 if the char is lowercase and 0 if anything else
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
