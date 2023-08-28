#include "lists.h"

/**
 * add_nodeint - A function to add an element at the
 * beginning of the linked list
 * @head: It's a pointer to a pointer that points
 * at the beginning of the linked list
 * @n: The integer that is going to be stored
 * in the new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;
	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
