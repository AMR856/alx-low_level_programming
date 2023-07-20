#include "main.h"

/**
 * main - entry point
 * Description: A C program that simulates the game fuzz-buzz by using
 * a simple for loop from 1 to 100 and some if condition that
 * depends on mod operator
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz ");
			continue;
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d ", i);
		}
	}
	printf("\n");
	return (0);
}
