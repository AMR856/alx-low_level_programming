#include "lists.h"

/**
 * get_nodeint_at_index - A function to get a pointer to
 * a specific index
 * @head: It's a pointer to the head of the linked list
 * @index: The index in which we want to get the node
 * that we want
 *
 * Return: A pointer to the required node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *currentNode;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);
	currentNode =  head;
	while (currentNode != NULL)
	{
		if (counter == index)
			return (currentNode);
		counter++;
		currentNode = (*currentNode).next;
	}
	return (NULL);
}
