#include "lists.h"

/**
 * add_dnodeint_end - A function to add a node at the end
 * @head: A pointer to a pointer that points to the head
 * @n: The number to be put in the node
 *
 * Return: NULL or a pointer to the newly created node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *looping;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (*head);
	}
	looping = *head;
	while (looping->next != NULL)
		looping = looping->next;

	looping->next = newNode;
	newNode->prev = looping;
	return (newNode);
}
