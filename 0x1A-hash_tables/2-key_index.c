#include "hash_tables.h"

/**
 * key_index - A function to get the index of my key
 * @key: A pointer to the string
 * @size: The size of my table
 *
 * Return: -1 or the index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int myIndex = 0;

	if (key == NULL)
		return (-1);
	myIndex = hash_djb2(key) % size;
	return (myIndex);
}
