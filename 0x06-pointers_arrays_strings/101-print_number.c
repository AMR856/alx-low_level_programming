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
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
