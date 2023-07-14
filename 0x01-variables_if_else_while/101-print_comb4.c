#include <stdio.h>

/**
 * main - entry point
 * Description: A C program that prints all the combinations of three digits
 * using nested loops and putchar function
 * Return: Always returns 0 (Success)
*/

int main(void)
{
	int i,j,k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j +'0');
				putchar(k + '0');
				if ( i == 7 && j == 8 && k == 9)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}

	}
	return (0);
}
