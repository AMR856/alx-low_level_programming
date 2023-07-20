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
	unsigned int num = n;
	if (n < 0)
	{
		_putchar('-');
		num = num * -1;
	}
	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
