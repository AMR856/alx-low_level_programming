#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: A C program that prints the lowercase alphabet
 * except q and e letters
 * Return: Always returns 0 (Success)
*/
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
			c = c + 1;
		}
		else
		{
			c = c + 1;
		}
	}
	putchar('\n');
	return (0);
}
