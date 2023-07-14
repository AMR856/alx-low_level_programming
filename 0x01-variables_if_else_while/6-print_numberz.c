#include <stdio.h>
/**
 * main - entry point
 * Description: A C program that prints the number from
 * 0 to 9 using putchar and some chars mainpulation
 * Return: Always returns 0 (Success)
*/
int main(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
