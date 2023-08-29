#include "lists.h"

/**
 * delete_nodeint_at_index - A function to delete a node at
 * a specific index
 * @head: A pointer to a pointer that points to the head
 * of the linked list
 * @index: The index of the node to be deleted
 *
 * Return: 1 or -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentNode, *newNode;
	unsigned int counter;

	if (*head == NULL)
		return (-1);
	currentNode = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(currentNode);
		return (1);
	}
	for (; currentNode != NULL && counter < index - 1; counter++)
	{
		currentNode = currentNode->next;
	}
	if (currentNode == NULL || currentNode->next == NULL)
		return (-1);

	newNode = currentNode->next->next;

	free(currentNode->next);

	currentNode->next = newNode;
	return (1);
}
