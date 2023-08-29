#include "lists.h"

/**
 * insert_nodeint_at_index - A function to insert a specific index
 * @head: It's a pointer to a pointer that points to the head of
 * the linked list
 * @idx: The index that we want put our new node in
 * @n: The data of the new node
 *
 * Return: It returns the address of the newly created node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	unsigned int counter = 0;
	listint_t *currentNode;

	if (*head == NULL)
		return (NULL);
	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		while (currentNode != NULL)
		{
			if (counter == idx)
			{
				newNode->next = currentNode->next;
				currentNode->next = newNode;
				return (newNode);
			}
			currentNode = currentNode->next;
			counter++;
		}
		free(newNode);
		return (NULL);
	}
	return (newNode);
}
