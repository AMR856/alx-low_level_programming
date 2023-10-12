#include "lists.h"

/**
 * free_dlistint - A function to free a doubly linked list
 * @head: A pointer to the head
 *
 * Return: Nothing (void)
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempHead, *tempHead1;

	tempHead = head;
	while (tempHead != NULL)
	{
		tempHead1 = tempHead->next;
		free(tempHead);
		tempHead = tempHead1;
	}
	head = NULL;
}
