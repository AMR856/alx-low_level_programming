#include "hash_tables.h"

/**
 * hash_table_set - it's a function to set a node in the array
 * @ht: A pointer to my table
 * @key: The key of my node
 * @value: The value to be put in the node
 *
 * Return: 1 on success and 0 on failure
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int myIndex;
	hash_node_t *myNewNode = (hash_node_t *)malloc(sizeof(hash_node_t));
	hash_node_t *current;

	if (ht == NULL)
		return (0);
	if (myNewNode == NULL)
		return (0);
	if (len(key) == 0)
		return (0);
	myNewNode->key = (char *)malloc(strlen(key) + 1);
	myNewNode->value = (char *)malloc(strlen(value) + 1);
	myNewNode->next = NULL;
	strcpy(myNewNode->value, value);
	strcpy(myNewNode->key, key);
	myIndex = key_index((const unsigned char *)myNewNode->key, ht->size);
	if (ht->array[myIndex] != NULL)
	{
		current = ht->array[myIndex];
		while (current->next != NULL)
			current = current->next;
		current->next = myNewNode;
		return (1);
	}
	ht->array[myIndex] = myNewNode;
	return (1);
}
