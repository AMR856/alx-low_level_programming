#include "lists.h"

/**
 * add_nodeint_end - A function to add a node at the end
 * of the linked list
 * @head: A pointer to a pointer that points at the beginning of
 * the linked list
 * @n: The integer that is going to be stored in new node
 *
 * Return: It returns a pointer to the newly created node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *myPointer;
	listint_t *current;

	myPointer = (listint_t *)malloc(sizeof(listint_t));
	if (myPointer == NULL)
	{
		return (NULL);
	}
	(*myPointer).n = n;
	(*myPointer).next = NULL;
	if (*head == NULL)
	{
		*head = myPointer;
		return (myPointer);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = myPointer;
	return (myPointer);
}
