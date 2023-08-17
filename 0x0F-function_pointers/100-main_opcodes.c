#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: Number of arguments
 * @argv: Pointer to strings that were inputed
 *
 * Return: It returns somethings
*/

int main(int argc, char **argv)
{
	int bytesNum;
	char *myPtr = (char *)&main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytesNum = atoi(argv[1]);
	if (bytesNum < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (bytesNum--)
	{
		printf("%02hhx", *myPtr++);
		if (bytesNum > 0)
			printf(" ");
		else
			printf("\n");
	}
	return (EXIT_SUCCESS);


}
