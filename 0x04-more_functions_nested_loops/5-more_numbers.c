#include "main.h"

/**
 * more_numbers - ِ function that prints the numbers from 0 to 14
 * Description: This function can prints numbers from 0 to 14
 * 10 times using two for loops and a simple if condition
 * ٌReturn: It returns void (Nothing)
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
