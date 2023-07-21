#include <stdio.h>

/**
 * _sqrt - A C function that computes the square root of a double
 * @a: The number that we want to compute its square root
 * Descrption: This function uses loops and some math to compute
 * the square root
 * Return: It returns the square root of the input
*/

double _sqrt(double a)
{
	double i = 0;
	double j = a / 2;

	while (j != i)
	{
		i = j;
		j = (a / i + i) / 2;
	}

	return (j);
}

/**
 * largest_prime_number - A function to calculate the largest prime factor
 * @n: The number that we want its largest prime factor
 * Description: This function uses a simple method of loops to finish
 * the composite numbers and after that it checks a simple condition
 * Return: It returns void (Nothing)
*/

void largest_prime_number(long long int n)
{
	long long maxPrime = -1;
	int i;

	while (n % 2 == 0)
	{
		maxPrime  = 2;
		n = n / 2;
	}
	for (i = 3; i <= _sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		largest = n;
	}
	printf("%llu\n", largest);
}

/**
 * main -entry point
 * Description: This function only calls the largest primt factor
 * function
 * Return: Always returns 0 (Success)
*/

int main(void)
{
	largest_prime_number(612852475143);
	return (0);
}
