#include "main.h"

/**
 * flip_bits - A function to count the flipped bits
 * @n: The first number
 * @m: The second number
 *
 * Return: The count of bits to be flipped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int myNumXOR = n ^ m;
	unsigned int counter = 0;

	while (myNumXOR > 0)
	{
		counter++;
		myNumXOR = myNumXOR & (myNumXOR - 1);

	}
	return (counter);
}
