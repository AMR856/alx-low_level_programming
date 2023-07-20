#include "main.h"

/**
 * print_numbers - function to print numbers from 0 to 9
 * Description: A function that uses a for loop to print numbers
*/

void print_numbers(void)
{
	int start;

	for (start = 0; start <= 9; start++)
	{
		_putchar(start + '0');
	}
	_putchar('\n');
}
