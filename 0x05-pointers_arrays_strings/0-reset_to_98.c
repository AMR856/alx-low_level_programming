#include <stdio.h>

/**
 * reset_to_98 - A C function that change the
 * value pointed by the pointer to  98
 * @n: The value to be changed to 98
 * Description: This function all it does is take a pointer then dereference it
 * to make it 98
 * Return: It returns void (Nothing)
*/

void reset_to_98(int *n)
{
	*n = *n + 1;
}
