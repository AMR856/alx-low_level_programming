#include "main.h"

/**
 * print_diagonal - A C progarm that prints some backslashes in stylish way
 * @n: The number of lines and spaces
 * Descirption: This program uses two for loops, one from them to print
 * the spaces and the second one to loop on the number of lines
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
