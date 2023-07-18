#include "main.h"

/**
 * times_table - A function that prints the multiplication table
 * Description: This function iterates over the numbers from 0 to 9
 * and in every iteration it iterates over the numbers from 0 to 9
 * and by doing this we could be able to print the multiplication table
*/

void times_table(void)
{
	int num, multi, product;

	for (num = 0; num <= 9; num++)
	{
		for (multi = 1; multi <= 9; multi++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			product = multi * num;

			if (product <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((product / 10) + '0');
			}
			_putchar((product % 10) + '0');

		}
		_putchar('\n');
	}
}
