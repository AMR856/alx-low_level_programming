#include "main.h"

/**
 * print_alphabet_x10 - A function that prints the
 * alphabet 10 times in lowercase
 * Description: This function loops around a counter 10 times in this times
 * the function loops around  a character that itself loops around the alphabet
 * Return: Always returns (0)
*/

void print_alphabet_x10(void)
{
	int counter = 0;
	char c = 'a';

	while (counter < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
		}
		_putchar('\n');
		c = 'a';
	}
}
