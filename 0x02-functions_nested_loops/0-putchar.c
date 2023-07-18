#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 * Description: A C program that prints one character
 * to the standard output, in other words
 * it's an implementation of putchar fucntion
 * using write function
 * Return: it returns the the characters
 * that was printed to the standard output
*/

int main(void)
{
	return (write(1, &char, 1));
}
