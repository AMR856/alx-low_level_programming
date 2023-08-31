#include "main.h"

/**
 * get_bit - A function to get the value of the bit
 * at the specfic index
 * @n: The binary number that we're going to use
 * @index: The index that we watn
 *
 * Return: It returns the value of the bit at
 * that index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	return ((n & mask) != 0);
}
