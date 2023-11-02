#include "hash_tables.h"

/**
 * hash_table_get - A function to get the values in a hashmap
 * @ht: A pointer to the table
 * @key: The key we're getting its value
 *
 * Return: NULL or the value
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int myIndex;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	myIndex = key_index((const unsigned char *)key, ht->size);
	if (ht->array[myIndex] == NULL)
		return (NULL);
	return (ht->array[myIndex]->value);
}
