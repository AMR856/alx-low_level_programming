#include "search_algos.h"

int binary_search_helper(int *myArray, int theLeft, int theRight, int theKey);
int minF(int, int);

/**
 * exponential_search - A function to do exp search in an array
 * @array: A pointer to the array
 * @size: The size of the array
 * @value: The value we're searching for
 * Return: The index or -1
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (array[0] == value)
		return (0);
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	printf("Value found between indexes [%ld] and [%d]\n",
	i / 2, minF(i, size - 1));
	return (binary_search_helper(array, i / 2, minF(i, size - 1), value));
}

/**
 * minF - A function to do obviously something
 * @a: The first
 * @b: The second
 * Return: You know
*/

int minF(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}
/**
 * binary_search_helper - A function to do help in binary search
 * @myArray: A pointer to the array
 * @theLeft: The left index of the array
 * @theRight: The right index of the array
 * @theKey: The index of the element
 * Return: The index or -1
*/

int binary_search_helper(int *myArray, int theLeft, int theRight, int theKey)
{
	int theMid;
	int i = theLeft;

	if (theRight >= theLeft)
		printf("Searching in array: ");
	for (; i <= theRight; i++)
	{
		if (i != theRight)
			printf("%d, ", myArray[i]);
		else
			printf("%d\n", myArray[i]);
	}
	while (theLeft <= theRight)
	{
		theMid = theLeft + (theRight - theLeft) / 2;
		if (myArray[theMid] == theKey)
			return (theMid);
		if (myArray[theMid] > theKey)
			return (binary_search_helper(myArray, theLeft, theMid - 1, theKey));
		return (binary_search_helper(myArray, theMid + 1, theRight, theKey));
	}
	return (-1);
}
