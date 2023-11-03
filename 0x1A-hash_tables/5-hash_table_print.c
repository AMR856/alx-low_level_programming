#include "hash_tables.h"

/**
 * hash_table_print - A function to print my hash table
 * @ht: A pointer to the head of the table
 *
 * Return: nothing (Void)
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int myFlag = 0;
	hash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (myFlag)
			{
				printf(", ");
				myFlag = 0;
			}
			current = ht->array[i];
			while (current != NULL)
			{
				printf("\'%s\': \'%s\'", current->key, current->value);
				if (current->next != NULL)
					printf(" ");
				current = current->next;
			}
			myFlag = 1;
		}
	}
	printf("}\n");
}
