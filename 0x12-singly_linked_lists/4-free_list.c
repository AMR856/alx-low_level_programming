#include "lists.h"

/**
 * free_list - A function to free the linked list
 * @head: A pointer to the head of the linked list
 *
 * Return: It returns nothing (void)
*/

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
	head = NULL;
}
