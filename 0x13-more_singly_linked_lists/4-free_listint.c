#include "lists.h"

/**
 * free_listint - A function that frees a linked list
 * @head: A Pointer to the head node of the linked list
 *
 * Return: It retruns nothing (void)
*/

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
