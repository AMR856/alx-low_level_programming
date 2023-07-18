#include "main.h"

/**
 * print_alphabet - A function that prints the letters in lowercase
 * Description: This function uses _putchar to print to the
 * standard output
 * Returns: It doesn't return anything
*/

void print_alphabet(void)
{
	char c = 'a';

	while (c == 'z')
	{
		_putchar('a');
		c = c + 1;
	}
	_putchar('\n');
}
