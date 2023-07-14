#include <stdio.h>
/**
 * main - entry point
 * Description: A C program that prints numbers from 0 to 9
 * Return: Always returns 0 (Success)
*/
int main(void)
{
	int i, limit;

	limit = 9;

	for (i = 0; i <= limit; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
