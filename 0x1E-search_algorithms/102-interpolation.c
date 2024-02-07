#include "search_algos.h"

int interpolation_search_helper(int *, size_t, size_t, int);

/**
 * interpolation_search - A function to search
 * @array: A pointer to the array
 * @size: The size of the array
 * @value: The value we're searching for
 * Return: The index or -1
*/

int interpolation_search(int *array, size_t size, int value)
{
	int theIndex = 0;
	size_t left = 0, right = size - 1;

	if (array == NULL)
		return (-1);

	theIndex = interpolation_search_helper(array, left, right, value);
	return (theIndex);
}

/**
 * interpolation_search_helper - A function to help with searching
 * @myArray: A pointer to the array
 * @l: The low index
 * @high: The high index
 * @value: The value we're searching for
 * Return: The index or -1
*/

int interpolation_search_helper(int *myArray, size_t l, size_t high, int value)
{
	size_t pos;

	if (l <= high && value >= myArray[l] && value <= myArray[high])
	{
		pos = l + (((double)(high - l) /
		(myArray[high] - myArray[l])) * (value - myArray[l]));

		printf("Value checked array[%ld] = [%d]\n", pos, myArray[pos]);
		if (myArray[pos] == value)
			return ((int)pos);

		if (myArray[pos] < value)
			return (interpolation_search_helper(myArray, pos + 1, high, value));

		if (myArray[pos] < value)
		{
			return (interpolation_search_helper(myArray, l, pos - 1, value));
		}
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
