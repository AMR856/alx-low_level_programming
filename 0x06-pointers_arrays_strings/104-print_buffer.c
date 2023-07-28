#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - A function to print the buffer in an array
 * @b: a pointer to the buffer
 * @size: size of the buffer
 * Return: It returns void (Nothing)
*/

void print_buffer(char *b, int size)
{
	int j, i;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j += 2)
		{
			if (j < size)
			{
				printf("%02x", b[j]);
			}
			if (j + 1 < size)
			{
				printf("%02x ", b[j + 1]);
			}
			else
			{
				printf(" ");
				printf("   ");
				printf(" ");
			}
		}
	for (j = i; j < i + 10 && j < size; j++)
	{
		if (isprint(b[j]))
		{
			printf("%c", b[j]);
		}
		else
		{
			printf(".");
		}
	}
		printf("\n");
	}
}
