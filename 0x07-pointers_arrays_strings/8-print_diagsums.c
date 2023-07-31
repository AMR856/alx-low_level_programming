#include "main.h"

/**
 * print_diagsums - A function that prints the sum
 * of the main diagonals
 * @a: A pointer to a 2D array
 * @size: The size of the 2D array
 * Descirption: Nothing
 * Return: It returns void (Nothing)
*/

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0, sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 = sum1 +  *(a + i * size + i);
		sum2 = sum2 + *(a + i * size + size - i - 1);
	}
	printf("%d, %d\n", sum1, sum2);
}
