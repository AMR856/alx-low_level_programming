#include "main.h"

/**
 * array_range - A function that creates array
 * and assigns some values to it
 * @min: The start of the range which
 * we use to assign values
 * @max: The end of the range
 *
 * Return: Pointer to the created array or NULL
*/

int *array_range(int min, int max)
{
	int strLen, i, counter;
	int *ptr;

	if (min > max)
		return (NULL);

	strLen = max - min + 1;
	ptr = (int *)malloc(strLen * sizeof(int));
	counter = 0;
	i = min;
	for (counter = 0; counter < strLen; counter++)
	{
		ptr[counter] = i;
		i++;
	}
	return (ptr);
}
