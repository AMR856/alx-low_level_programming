#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the program name, followed by a new line
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: Always o.
 */

int main(int argc, char **argv)
{
	int result;

	if (argc <= 1)
	{
		printf("Error\n");
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (EXIT_SUCCESS);
}
