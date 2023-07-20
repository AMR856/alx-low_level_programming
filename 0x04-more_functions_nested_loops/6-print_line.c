#include "main.h"

/**
 * print_line - A function that prints some lines
 * @n: The number of underscores
 * Description: This function prints some underscores using
 * a for loop and a simple condition that checks the number
 * of underscores that should be printed
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
