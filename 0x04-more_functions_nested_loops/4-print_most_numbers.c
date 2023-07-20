#include "main.h"

/**
 * print_most_numbers - A function that prints numbers from 0 to 9
 * except 2 and 4
 * Description: This function prints the numbers using a for loop
 * and it excepts 2 and 4 using an if condition
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + '0');
	}
	_putchar('\n');
}
