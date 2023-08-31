#include "main.h"

/**
 * print_binary - A function to print the binary represtnation
 * of a num
 * @n: The number that we want its binary
 *
 * Return: Nothing (void)
*/

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int zeros = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mask)
	{
		if (n & mask)
		{
			zeros = 0;
			_putchar('1');
		}
		else if (!zeros)
			_putchar('0');
		mask = mask >> 1;
	}
}
