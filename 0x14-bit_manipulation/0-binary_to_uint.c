#include "main.h"

/**
 * binary_to_uint - A function to convert from binary to int
 * @b: A pointer to a string that represnt a bin num
 *
 * Return: It returns the num in decimal
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int theDecNum = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			theDecNum = theDecNum * 2 + (b[i] - '0');
		else
			return (0);
	}
	return (theDecNum);
}
