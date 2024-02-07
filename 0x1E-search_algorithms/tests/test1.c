#ifndef __SEARCH_ALGO__
#define __SEARCH_ALGO__
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
#endif

int _sqrt_wrapper(int, int);

/**
 * _sqrt_recursion - A function that returns the sqrt of a number
 * @n: The number that we want to get its sqrt
 *
 * Return: It returns the sqrt of the input
*/

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_wrapper(n, 1));
}

/**
 * _sqrt_wrapper - A function that helps to find the sqrt
 * @n: The number that we want to find its square root
 * @myValue: The starting point of the searching
 *
 * Return: It returns the square root of n
*/

int _sqrt_wrapper(int n, int myValue)
{
	if (myValue * myValue == n)
		return (myValue);
	else if (myValue * myValue < n)
		return (_sqrt_wrapper(n, myValue + 1));
	else
		return (-1);
}

int theMin(int a, int b);
int jump_search(int *array, size_t size, int value)
{
    int myStep;
    int thePrev = 0;

    myStep = 3;
    while (array[theMin(myStep, size) - 1] < value)
    {
        thePrev = myStep;
        myStep = myStep + 3;
        if (thePrev >= value)
            return (-1);
    }
    while (array[thePrev] < value)
    {
        thePrev++;
        if (thePrev == theMin(myStep, value))
            return (-1);
    }
    if (array[thePrev] == value)
        return (thePrev);

    return (-1);
}

int theMin(int a, int b)
{
    if (a > b)
        return (b);
    else
        return (a);
}

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 6, jump_search(array, size, 6));
    /*
    printf("Found %d at index: %d\n\n", 1, jump_search(array, size, 1));
    printf("Found %d at index: %d\n", 999, jump_search(array, size, 999));
    */
    return (EXIT_SUCCESS);
}
