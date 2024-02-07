#include "search_algos.h"

int binary_search_helper(int *myArray, int theLeft, int theRight, int theKey);

/**
 * binary_search - A function to do a binary search on the array
 * @array: A pointer to the array
 * @size: The size of the array
 * @value: The value we're are searching for
 * Return: The index of the key or NULL
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;
	int theIndex;

	if (array == NULL)
		return (-1);
	theIndex = binary_search_helper(array, left, right, value);
	return (theIndex);
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
