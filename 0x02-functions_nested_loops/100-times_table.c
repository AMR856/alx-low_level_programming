#include "main.h"

/**
 * print_times_table - A function that prints the multiplication table
 * @n: The number that we use for iteration
 * Description: This function has two nested loops so that
 * it can print the required pattern
*/

void print_times_table(int n)
{
	int num,  multi, prod;

	if (n > 15)
		break;
	for (num = 0; num <= n; num++)
	{
		_putchar('0');
		for (multi = 1; multi <= n; multi++)
		{
			_putchar(',');
			_putchar(' ');
			prod = num * multi;
			if (prod <= 9)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (prod <= 99)
			{
				_putchar(' ');
				_putchar((prod / 10) + '0');
			}
			else if (prod <= 999)
			{
				_putchar((prod / 100) + '0');
				_putchar((prod / 10) - (prod / 100) * 10 + '0');
			}
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
