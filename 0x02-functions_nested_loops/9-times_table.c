#include <main.h>

/**
 * times_table - A function that prints the multiplication table
 * Description: This function iterates over the numbers from 0 to 9
 * and in every iteration it iterates over the numbers from 0 to 9
 * and by doing this we could be able to print the multiplication table
*/

void times_table(void)
{
	int firstDigit, secondDigit;

	for (firstDigit = 0; firstDigit <= 9; firstDigit++)
	{
		for (secondDigit = 0; secondDigit <= 9; secondDigit++)
		{
			if ((firstDigit * secondDigit) / 10 == 0)
			{
				if (secondDigit == 0)
				{
				}
				else
				{
					_putchar(' ');
				}
			}
			else
			{
				putchar((firstDigit * secondDigit) % 10 + '0');
			}
			_putchar((firstDigit * secondDigit) % 10 + '0');
			if (secondDigit == 9)
				break;

			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
