#include "lists.h"

/**
 * pop_listint - A function to pop the head of the linked list
 * @head: It's a pointer to a pointer that points to the head
 * of the linked list
 *
 * Return: It returns the data that was included in the head
*/

int pop_listint(listint_t **head)
{
	listint_t *tempHead;
	int n;

	if (*head == NULL)
		return (0);
	tempHead = *head;
	n = (*tempHead).n;
	*head = (*head)->next;
	free(tempHead);
	return (n);
}
