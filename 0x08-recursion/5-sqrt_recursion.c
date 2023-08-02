#include "main.h"

int _sqrt_wrapper(int, int);

/**
 * _sqrt_recursion - A function that returns the sqrt of a number
 * @n: The number that we want to get its sqrt
 *
 * Return: It returns the sqrt of the input
*/

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_wrapper(n, 1));
}

/**
 * _sqrt_wrapper - A function that helps to find the sqrt
 * @n: The number that we want to find its square root
 * @myValue: The starting point of the searching
 *
 * Return: It returns the square root of n
*/

int _sqrt_wrapper(int n, int myValue)
{
	if (myValue * myValue == n)
		return (myValue);
	else if (myValue * myValue < n)
		return (_sqrt_wrapper(n, myValue + 1));
	else
		return (-1);
}
