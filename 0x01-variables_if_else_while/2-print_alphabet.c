#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: A C program that prints the lowercase alphabet
 * using putchar fucntion and some chars manipulation
 * Return: Always returns 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
