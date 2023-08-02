#include "main.h"

/**
 * factorial - A function to get the factorial of a specfic num
 * @n: The number that we want to get its factorial
 *
 * Return: It returns the factorial of the input
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
