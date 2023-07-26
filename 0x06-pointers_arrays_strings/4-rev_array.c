#include "main.h"

/**
 * reverse_array - A function to reverse an array of ints
 * @a: A pointer to the array to be reversed
 * @n: The size of the array
 * Description: This function loops through the half of the array
 * and it swaps between the elements from the two halves
 * Return: It returns void (Nothing)
*/

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
