#include "main.h"

int _helper_wrapper(int, int);

/**
 * is_prime_number - A function to check if the number is prime
 * @n: The number to be checked
 *
 * Return: 1 or zero (1 is prime and 0 if not)
*/

int is_prime_number(int n)
{
	return (_helper_wrapper(n, 2));
}

/**
 * _helper_wrapper - The helper function to has all the conditions
 * @n: The number to be checked
 * @index: The start of checking
 *
 * Return: 1 or zero
*/

int _helper_wrapper(int n, int index)
{
	if (n <= 0 || n == 1)
		return (0);
	else if (n == 2 || n == 3)
		return (1);

	else if (n % index == 0)
		return (0);
	else if (index * index > n)
		return (1);

	return (_helper_wrapper(n, index + 1));
}
