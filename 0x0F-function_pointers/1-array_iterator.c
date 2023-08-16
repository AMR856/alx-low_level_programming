#include "function_pointers.h"

/**
 * array_iterator - A function to that loops through the array
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: Pointer to the function to be executed
 *
 * Return: It returns void (Nothing)
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	
	if (size != 0 && action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
