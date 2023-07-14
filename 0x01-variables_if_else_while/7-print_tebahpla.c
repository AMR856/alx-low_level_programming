#include <stdio.h>

/**
 * main - entry point
 * Description: A C program that prints the alphabet in reverse order
 * using putchar function
 * Return: Always returns 0 (Success)
*/

int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c = c - 1;
	}
	putchar('\n');
	return (0);
}
