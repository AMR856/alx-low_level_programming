#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function to a 2 dimensional array using DMP
 * @width: The number of columns
 * @height: The number of rows
 *
 * Return: A pointer to the new array or NULL
*/

int **alloc_grid(int width, int height)
{
	if (width < 0 || height < 0)
	{
		return (NULL);
	}
	else
	{
		int i, j;
		int **myArray = (int **)malloc(height * sizeof(int));

		for (i = 0; i < height; i++)
			myArray[i] = (int *)malloc(width * sizeof(int));

		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
				myArray[i][j] = 0;
		}
		return (myArray);
	}
}
