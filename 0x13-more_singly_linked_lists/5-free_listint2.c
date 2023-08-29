#include "lists.h"

/**
 * free_listint2 - A function to free a linked list
 * @head: A pointer that points to a pointer which points
 * to the head of the linked list
 *
 * Return: It returns nothing (void)
*/

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
	head = NULL;
}
