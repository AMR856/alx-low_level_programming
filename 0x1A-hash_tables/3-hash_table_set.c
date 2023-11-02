#include "hash_tables.h"

hash_node_t *creatingNewNode(const char *key, const char *value);
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
	hash_node_t *myNewNode;
	hash_node_t *currentNodeinIndex;

	if (ht == NULL || key == NULL || value == NULL
	|| *key == '\0' || *value == '\0')
		return (0);
	myIndex = key_index((const unsigned char *)key, ht->size);
	currentNodeinIndex = ht->array[myIndex];

	if (currentNodeinIndex == NULL)
	{
		myNewNode = creatingNewNode(key, value);
		if (myNewNode == NULL)
			return (0);
		ht->array[myIndex] = myNewNode;
		return (1);
	}

	while (currentNodeinIndex != NULL)
	{
		if (strcmp(currentNodeinIndex->key, key) == 0)
		{
			free(currentNodeinIndex->value);
			currentNodeinIndex->value = strdup(value);
			return (1);
		}
		currentNodeinIndex = currentNodeinIndex->next;
	}

	myNewNode = creatingNewNode(key, value);
	if (myNewNode == NULL)
		return (0);

	myNewNode->next = ht->array[myIndex];
	ht->array[myIndex] = myNewNode;
	return (1);
}

/**
 * creatingNewNode - A function to create a new node
 * @key: The key of the new node
 * @value: The value to be put in it
 *
 * Return: NULL Or a pointer to the new node
*/

hash_node_t *creatingNewNode(const char *key, const char *value)
{
	hash_node_t *myNewNode;

	myNewNode = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (myNewNode == NULL)
		return (NULL);

	myNewNode->key = strdup(key);
	myNewNode->value = strdup(value);
	myNewNode->next = NULL;

	return (myNewNode);
}

/**
 * docs - Just a quick docs for the functions
 * We have three conditions
 * 1- The key doesn't exist before
 * 2- if the key existed with the same key and index
 * 3- the key is new but has the same index with someone else
*/
