#include "main.h"

/**
 * get_endianness - A function to check the endianness of the machine
 *
 * Return: 1 or 0
*/

int get_endianness(void)
{
	unsigned int i = 1;
	char *myChar = (char *)&i;

	if (myChar == NULL)
		return (0);
	else
		return (1);
}
