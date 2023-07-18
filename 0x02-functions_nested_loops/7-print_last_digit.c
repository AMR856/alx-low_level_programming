#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of an integer
 * @r: The number that we want to get its last digit
 * Description: This function using the reminder method to get
 * the last digit but first it makes sure that it's dealing with
 * the absolute value of the number
 * Return: It returs the last digit
*/

int print_last_digit(int r)
{
	int last;

	if (r < 0)
	{
		last = (-1) * (r % 10);
	}
	else
	{
		last = (r % 10);
	}
	_putchar(last + '0');
	return (last);
}
