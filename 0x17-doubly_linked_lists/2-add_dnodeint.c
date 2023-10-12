#include "lists.h"


/**
 * add_dnodeint - A function to add a node at the beginning
 * @head: A pointer to a pointer that points to the head
 * @n: The number to be put in the node
 *
 * Return: NULL or a pointer to the newly created node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	if (*head != NULL)
		(*head)->prev = newNode;
	*head = newNode;
	return (newNode);
}
