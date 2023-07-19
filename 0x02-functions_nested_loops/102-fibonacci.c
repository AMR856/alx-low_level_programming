#include "main.h"

/**
 * main - entry point
 * Description: A C program that prints the first 50 numbers in fib series
 * using a for loop and some summation opearations
 * Return: Always returns 0 (Success)
*/

int main(void)
{
	int counter;
	unsigned long term1 = 0, term2 = 1, sum;

	for (counter = 0; counter < 50; counter++)
	{
		sum = term1 + term2;
		term1 = term2;
		term2 = sum;
		printf("%lu", sum);

		if (counter == 50)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
