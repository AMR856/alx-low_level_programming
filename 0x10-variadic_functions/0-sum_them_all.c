#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * sum_them_all - A function that sums all its input
 * @n: The number of its input
 *
 * Return: It returns the sum of the input or 0
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, x;
	size_t i;
	va_list args;

	if (n == 0)
		return (0);
	
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum = sum + x;
	}
	return (sum);
}
