#include "main.h"

/**
 * _print_rev_recursion - A function to print in a reverse order
 * @s: A pointer to the string
 *
 * Return: It returns void (Nothing)
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
