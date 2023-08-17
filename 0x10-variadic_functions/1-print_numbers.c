#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - A function to print numbers passed to it
 * @separator: The separator that we want to separate our numbers with
 * @n: The number of parameters
 *
 * Return: It returns void (Nothing)
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int x;
	unsigned int i;

	if (n <= 0)
		return;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (i == n - 1)
			break;

		if (separator == NULL)
			continue;
		else
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
