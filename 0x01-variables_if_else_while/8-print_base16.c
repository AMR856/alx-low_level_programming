#include <stdio.h>

/**
 * main - entry point
 * Description: A C program that prints the numbers in 16 base
 * (The letters are in lowercase)
 * Return: Always returns 0 (Success)
*/

int main(void)
{
	char digit,letters;

	digit = '0';
	letters = 'a';

	while (digit <= '9')
	{
		putchar(digit);
		digit = digit + 1;
	}
	while (letters <= 'f')
	{
		putchar(letters);
		letters = letters + 1;
	}
	putchar('\n');
	return (0);
}
