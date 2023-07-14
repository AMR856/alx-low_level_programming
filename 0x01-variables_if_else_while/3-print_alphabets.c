#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: A C program that prints the lowercase and uppercase alphabet
 * using putchar fucntion and some chars manipulation
 * Return: Always returns 0 (Success)
*/
int main(void)
{
	char l, a;

	l = 'a';
	a = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l = l + 1;
	}
	while (a <= 'Z')
	{
		putchar(a);
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
