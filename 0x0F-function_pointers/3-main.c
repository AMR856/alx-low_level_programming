#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: Number of arguments that is inputed that the function
 * @argv: inputed strings
 *
 * Return: A lot of things
*/

int main(int argc, char **argv)
{
	int firstNum, secondNum, result;

	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	firstNum = atoi(argv[1]);
	secondNum = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = func(firstNum, secondNum);

	printf("%d\n", result);

	return (EXIT_SUCCESS);

}
