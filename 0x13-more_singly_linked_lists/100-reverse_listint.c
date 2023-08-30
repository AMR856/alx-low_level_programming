#include "lists.h"

/**
 * reverse_listint - A function to reverse the linked list
 * @head: A pointer to a pointer that points to the
 * head of the linked list
 *
 * Return: It returns a pointer to the new head
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL, *myPrev = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = myPrev;
		myPrev = *head;
		*head = next;
	}

	*head = myPrev;

	return (*head);
}
