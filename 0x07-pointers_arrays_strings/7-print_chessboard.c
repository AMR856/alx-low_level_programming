#include "main.h"

/**
 * print_chessboard - A function to print a chessboard
 * @a: A pointer to the array
 * Description: This function has two nested loops
 * to go through the rows and columns
 * Return: It returns void (Nothing)
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			printf("%c", a[i][j]);
		printf("\n");
	}
}
