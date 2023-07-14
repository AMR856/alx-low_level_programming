#include <stdio.h>

/**
 * main - entry point
 * Description: A C program that prints all the possible
 * combainations of two digits using putchar function
 * and a nested loop
 * Return: Always returns 0 (Success)
*/

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8 && j == 9)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
