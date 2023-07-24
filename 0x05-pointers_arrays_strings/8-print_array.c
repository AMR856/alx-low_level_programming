#include <stdio.h>

/**
 * print_array - A function to prints the elements of an array
 * @a: A pointer to the array to be printed
 * @n: The size of the array
 * Description: This function loops through each element of
 * the array and prints it
 * Return: It returns void (Nothing)
*/

void print_array(int *a, int n)
{
	int i;

	i = n;
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
			break;
		}
		else
			printf("%d, ", a[i]);
	}
	putchar('\n');
}
