#include <stdio.h>
/**
 * main - entry point
 * Description: A C program that prints the number from
 * 0 to 9 using putchar and some int mainpulation
 * Return: Always returns 0 (Success)
*/
int main(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		putchar(num + '0');
		num = num + 1;
	}
	putchar('\n');
	return (0);
}
