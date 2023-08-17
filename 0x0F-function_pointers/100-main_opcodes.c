#include <stdio.h>
#include <stdlib.h>

/**
 * printOpCodes - A function to print opcodes
 * @mainAddr: A pointer to main function
 * @mySize: Size of main function
 *
 * Return: It returns void (Nothing)
*/

void printOpCodes(const void *mainAddr, int mySize)
{
	int i;
	char *bytes = (char *)mainAddr;

	for (i = 0; i < mySize; i++)
	{
		printf("%.02hhx ", bytes[i]);
	}
	printf("\n");
}

/**
 * main - entry point
 * @argc: Number of arguments
 * @argv: Pointer to strings that were inputed
 *
 * Return: It returns somethings
*/

int main(int argc, char **argv)
{
	int numOfBytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numOfBytes = atoi(argv[1]);

	if (numOfBytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	printOpCodes((void *)&main, numOfBytes);

	return (EXIT_SUCCESS);
}
