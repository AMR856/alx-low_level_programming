#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_strings - A function to print strings
 * @separator: A pointer to the string that is
 * going to separate the inputed strings
 * @n: The number of the inputed strings
 *
 * Return: It returns void (Nothing)
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *myString;

	va_start(args, n);
	for (i =0; i < n; i++)
	{
		myString = va_arg(args, char *);
		if (myString == NULL)
		{
			printf("nil");
			if (i == n - 1)
				break;
			if (separator == NULL)
				continue;
			else
				printf("%s", separator);
		}
		else
		{
			printf("%s", myString);
			if (i == n - 1)
				break;
			if (separator == NULL)
				continue;
			else
				printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
