#include "main.h"

/**
 * print_numbers - function to print numbers from 0 to 9
 * Description: A function that uses a for loop to print numbers
*/

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
