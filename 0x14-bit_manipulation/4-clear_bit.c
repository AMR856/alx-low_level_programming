#include "main.h"

/**
 * clear_bit - A function to clear a bit at a specific index
 * @n: The number that we want to make the clear on it
 * @index: The index that we want to clear
 *
 * Return: 1 or -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = ~(1UL << index);
	*n = (*n & mask);
	return (1);
}
