#include "search_algos.h"

/**
 * jump_search - A function to search in an array using jumping
 * @array: A pointer to the array
 * @size: The size of the array
 * @value: The value we're searching for
 * Return: The index of -1
*/

int jump_search(int *array, size_t size, int value)
{
	size_t myStep, i = 0;
	size_t thePrev = 0;

	myStep = (int)sqrt((double)size);
	printf("Value checked array[%ld] = [%d]\n", thePrev, array[0]);
	while (array[myStep] < value && myStep < size)
	{
		thePrev = myStep;
		printf("Value checked array[%ld] = [%d]\n", myStep, array[thePrev]);
		myStep = myStep + (int)sqrt((double)size);
		if (myStep > size - 1)
			return (-1);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", thePrev, myStep);
	for (i = thePrev;  i <= myStep; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
