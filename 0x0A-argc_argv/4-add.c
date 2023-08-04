#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Prints the program name, followed by a new line
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: Always o.
 */

int main(int argc, char **argv)
{
	int sum, i;
	size_t j;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < strlen(argv[i]); j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);

		}
	}
	(void)argc;
	(void)argv;
	printf("%d\n", sum);
	return (0);
}
