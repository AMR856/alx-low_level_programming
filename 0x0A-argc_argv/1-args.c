#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the program name, followed by a new line
 * @args: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: Always o.
 */

int main(int args, char **argv)
{
	printf("%d\n", args);
	(void)argv;
	return (EXIT_SUCCESS);
}
