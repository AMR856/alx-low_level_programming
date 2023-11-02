#include "hash_tables.h"

/**
 * hash_table_create - A function to create my hash table
 * @size: It's the size of the table
 *
 * Return: A pointer to the table or NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *myTable = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (myTable == NULL)
		return (NULL);
	myTable->size = size;
	myTable->array = (hash_node_t **)calloc(myTable->size, sizeof(hash_node_t *));
	if (myTable->array == NULL)
		return (NULL);
	for (; i < myTable->size; i++)
		myTable->array[i] = NULL;

	return (myTable);
}
