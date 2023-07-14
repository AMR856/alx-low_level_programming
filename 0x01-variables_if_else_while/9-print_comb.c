#include <stdio.h>

/**
 * main - entry point
 * Description: A C program that prints numbers
 * from 0 to 9 seprated by commas and spaces
 * Return: Always returns 0 (Success)
*/

int main(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		putchar(c);
		putchar(',');
		putchar(' ');
		c = c + 1;
	}
	return (0);
}
