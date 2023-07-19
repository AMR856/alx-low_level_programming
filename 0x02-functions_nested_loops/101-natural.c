#include "main.h"

/**
 * main - entry point
 * Description: This function uses a for loop and condition using mod operator
 * to check for the required condition
 * Return: Always returns 0 (Success)
*/

int main(void)
{
	int theLimit = 1024;
	int sum = 0, i;

	for (i = 0; i < theLimit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%d", sum);
	return (0);
}
