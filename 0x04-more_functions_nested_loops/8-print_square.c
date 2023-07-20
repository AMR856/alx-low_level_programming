#include "main.h"

/**
 * print_square - A C program that prints # on multiple lines
 * @size: The number of times
 * Descirption: This program prints # multiple times
 * on multiple lines depending on the value of the input
*/

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
