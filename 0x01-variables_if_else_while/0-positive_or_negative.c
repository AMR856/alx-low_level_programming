#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: A C program that checks wheather a number that is genearted
 * randomly using rand funcion is positive or negative or equals to zero
 * Return: Always returns 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
