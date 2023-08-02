#include "main.h"

/**
 * _puts_recursion - A functoin to print a string using recursion
 * @s: A pointer to the string
 *
 * Return: It returns void (Void)
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
