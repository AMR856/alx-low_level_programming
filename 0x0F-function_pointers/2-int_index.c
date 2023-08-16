#include "function_pointers.h"

/**
 * int_index - A function to loop through the array
 * and compare values
 * @array: Pointer to the array
 * @size: Size of the array
 * @cmp: Pointer to the function that is used for
 * comparsion
 *
 * Return: It returns the index of the element (If found)
*/




int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
