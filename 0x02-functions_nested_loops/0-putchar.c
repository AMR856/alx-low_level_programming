#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 * Description: A C program that prints one character
 * to the standard output, in other words
 * it's an implementation of putchar function
 * using write function
 * Return: it returns the number of characters
 * that was printed to the standard output
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
