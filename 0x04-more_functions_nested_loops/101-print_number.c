#include "main.h"

/**
 * print_number - A function that print integers
 * @n: The integer to be printed
 * Description: This function uses recursion to print
 * all the digits of the numbers by using n / 10
 * and checking if it is bigger than 0 and if it is
 * then the function keeps caling itself
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
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
