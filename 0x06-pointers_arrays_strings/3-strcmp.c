#include "main.h"


/**
 * _strcmp - A function to compare two strings
 * @X: First string to be compared
 * @Y: Second string to be compared
 * Description: This function loops through each char in
 * the X and Y and when it finds any different char
 * it breaks out of the loop and return the value of their ASCII values
 * substraction
 * Return: 0 if they are equal, a positive number if X is bigger
 * than Y, a negative number if X is smaller than Y
*/

int _strcmp(char *X, char *Y)
{
	while (*X)
	{
		if (*X != *Y)
			break;

		X = X + 1;
		Y = Y + 1;
	}

	return (*(const unsigned char *)X - *(const unsigned char *)Y);
}
