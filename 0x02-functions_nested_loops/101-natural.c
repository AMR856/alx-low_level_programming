#include "main.h"

/**
 * print_multiple - A function that prints the multiple of 3
 * and 5 below 1024 and sums them up
 * Description: This function uses a for loop and condition using mod operator
 * to check for the required condition
*/

void print_multiple(void)
{
	int theLimit = 1024;
	int sum = 0;

	for (int i = 0; i < theLimit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%d", sum);
}
