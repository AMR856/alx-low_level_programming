#include <unistd.h>
#include "main.h"

/**
 * _putchar - Function that prints one char
 * @c: The char that is going to be printed:
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
