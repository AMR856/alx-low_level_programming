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
	int temp;

	if (r < 0)
	{
		r = r * -1;
	}

	temp = r % 10;
	_putchar(temp);
	return (temp);
}
