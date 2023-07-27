#include "main.h"

/**
 * print_number - A function to print integers
 * @n: The integer to be printed
 * Description: This function loops through the integer
 * and divide by 10 to remove the last digit
 * Return: It returns void (Nothing)
*/

void print_number(int n)
{
	unsigned int un;

	un = n;
	if (n < 0)
	{
		_putchar('-');
		un = n * - 1;
	}
	if (un / 10)
		print_number(un / 10);

	_putchar(un % 10 + '0');
}
