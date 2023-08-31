#include "main.h"

/**
 * set_bit - A function to set the value of a bit
 * @n: The number in binary that we want
 * to set the value of its index to 1
 * @index: The index in which we want to set
 * the value
 *
 * Return: 1 or -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = (1UL << index);
	*n = (*n | mask);
	return (1);
}
