#include "main.h"

/**
 * _sqrt_recursion - A function that returns the sqrt of a number
 * @n: The number that we want to get its sqrt
 *
 * Return: It returns the sqrt of the input
*/

int _sqrt_recursion(int n)
{
	int i;

	if (n == 0 || n == 1)
		return (n);
	for (i = 1; i <= n / 2; i++)
	{
		if (i * i == n)
			return (i);
	}

	return (-1);
}
