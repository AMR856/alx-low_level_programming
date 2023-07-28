#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * isPrintable - A function to check if the char can be printed
 * @myChar: The char to be checked
 * Return: It returns a boolean true
 * if it is a printable char and
 * false if it is not
*/

bool isPrintable(int myChar)
{
	if (myChar >= 32 && myChar <= 127)
		return (true);
	else
		return (false);
}


/**
 * printAscii - A fucntion to print the Hex
 * chars in the buffer
 * @b: A pointer to the buffer
 * @start: The beginning of printing of Hex values
 * @end: The end of printing of Hex values
 * Return: It returns void (Nothing)
*/

void printHex(char *b, int start, int end)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i < end)
			printf("%02x", b[i + start]);
		else
			printf("  ");
		if (i % 2)
			printf(" ");

		i = i + 1;
	}
}

/**
 * printAscii - A fucntion to print the ASCII
 * chars in the buffer
 * @b: A pointer to the buffer
 * @start: The beginning of printing of ASCII values
 * @end: The end of printing of ASCII values
 * Return: It returns void (Nothing)
*/

void printAscii(char *b, int start)
{
	int i = 0, myChar;

	while (i < 10)
	{
		myChar = b[i + start];
		if (isPrintable(myChar))
			printf("%c", myChar);
		else
			printf(".");
		i = i + 1;
	}
}

/**
 * print_buffer - A function to prints a buffer
 * @b: A pointer to the buffer
 * @size: The size of the buffer
 * Return: It returns void (Nothing)
*/

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start = start + 10)
		{
			if (size - start > 10)
				end = 10;
			else
				end = size - start;
			printf("%08x: ", start);
			printHex(b, start, end);
			printAscii(b, start);
			printf("\n");
		}
	}
	else
	{
		printf("\n");
	}
}
