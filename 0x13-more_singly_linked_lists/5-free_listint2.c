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
	listint_t *current = *head;
	listint_t *next;

	if (head == NULL)
		return;

	while (current != NULL)
	{
		next = current;
		current = current->next;
		free(next);
	}
	*head = '\0';
	head = '\0';
}
