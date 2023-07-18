#include "main.h"

/**
 * print_to_98 - A function that prints from the number
 * that was passed to it to 98
 * @n: The number where we start printing
 * Description: The function first checks if the number
 * is bigger than 98 or smaller and after that it runs a loop
 * that will prints the number and it each loop will stop before
 * 98 and 98 will be printed outside the for loops
*/

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	}
	else
	{
		for (i = n; i < 98; i++)
			printf("%d, ", i);
	}
	printf("98\n");
}
