#include "main.h"
#include <string.h>

/**
 * _realloc - A function that is equal to realloc
 * @ptr: Pointer to a previously allocated memory
 * @old_size: It's the size of the old allocated memory
 * @new_size: It's the size of the new allocated memory
 *
 * Return: It returns a pointer to the new allocated
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptrnew;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptrnew = malloc(new_size);
		if (ptrnew == NULL)
			return (NULL);

		return (ptrnew);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	ptrnew = malloc(new_size);
	if (ptrnew == NULL)
		return (NULL);
	if (old_size > new_size)
	{
		memcpy(ptrnew, ptr, new_size);
	}
	else
	{
		memcpy(ptrnew, ptr, old_size);
	}
	free(ptr);
	return (ptrnew);
}
