#include "main.h"

/**
 * swap_int - A C function that swaps two integers
 * @a: The first integer to be swaped
 * @b: The second integer to be swaped
 * Description: This function uses the normal method of
 * of swaping two integers and its the temp value
 * Return: It returns void (Nothing)
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
