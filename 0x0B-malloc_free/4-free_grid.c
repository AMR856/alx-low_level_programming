#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function to clear the dynamically
 * alocated array
 * @grid: Pointer the array
 * @height: Number of rows in the array
 *
 * Return: It returns void (Nothing)
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
