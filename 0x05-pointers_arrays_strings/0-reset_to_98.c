#include <stdio.h>

/**
 * reset_to_98 - A C function that increments a value that is
 * pointed by a pointer by 1
 * @n: The value to be incremented
 * Description: This function all it does is take a pointer then dereference it
 * to add zero to its pointed value
 * Return: It returns void (Nothing)
*/

void reset_to_98(int *n)
{
	*n = *n + 1;
}
