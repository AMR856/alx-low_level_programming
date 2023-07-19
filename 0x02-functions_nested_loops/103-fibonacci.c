#include "main.h"

/**
 * main - entey point
 * Description: A C program that sums all the even terms
 * of fib series and in the end it prints the sum
 * followed by a new line
 * Return: Always returns 0 (Success)
*/

int main(void)
{
	int counter;
	unsigned int term1 = 0, term2 = 1, sum, evenSum = 0;

	for (counter = 0; counter < 34; counter++)
	{
		sum = term1 + term2;
		if (sum % 2 == 0)
			evenSum = evenSum + sum;
		term1 = term2;
		term2 = sum;
	}
	printf("%lu\n", evenSum);
	return (0);
}
