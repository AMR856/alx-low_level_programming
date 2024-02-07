#include "search_algos.h"

/**
 * linear_search - A function to search in an array linearly
 * @array: The array
 * @size: The size of the array
 * @value: The value we're searching for
 * Return: -1 or the index
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	bool check = false;
	int theIndex = -1;

	if (array == NULL)
		return (-1);
	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value && !check)
		{
			theIndex = i;
			return (theIndex);
		}
	}
	return (theIndex);
}
