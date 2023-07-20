#include "main.h"

/**
 * print_triangle - A C function that prints a right aligned
 * triangle
 * @size: The number of rows in the triangle
 * Description: This function prints the triangle using some for loops
 * and if conditions
 * Return: It returns void (Nothing)
*/

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = size - i - 1; j >= 0; j--)
		{
			_putchar(' ');
		}
		for (k = 0; k < i; k++)
		{
			_putchar('#');
		}
		if (i == 1)
		{
		}
		_putchar('\n');
	}
}
