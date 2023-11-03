#include "hash_tables.h"

/**
 * hash_table_delete - A function to free my table
 * @ht: A pointer to the head of the table
 *
 * Return: Nothing (void)
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current;
	hash_node_t *prev;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			free(current->key);
			free(current->value);
			prev = current;
			current = current->next;
			free(prev);
		}
	}
	free(ht->array);
	free(ht);
}
