#include "main.h"

/**
 * print_sign - Function to check if the number is
 * negative or positive or equals to zero
 * @n: The number to be checked
 * Description: The function uses some if condition to
 * do its work
 * Return: It returns 1 if the number is positive
 * 0 if the number is equal to 0
 * and -1 if the number is negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
