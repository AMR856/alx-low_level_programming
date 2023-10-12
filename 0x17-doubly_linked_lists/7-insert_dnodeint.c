#include "lists.h"


/**
 * insert_dnodeint_at_index - A function to insert node at a specfic index
 * @h: A pointer to a pointer that points to the head
 * @idx: The index of the node
 * @n: The data
 *
 * Return: NULL or the index
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *myTempHead = *h;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	unsigned int counter = 0;

	if (h == NULL || newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->prev = NULL;
		newNode->next = myTempHead;
		if (myTempHead != NULL)
			myTempHead->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	while (myTempHead != NULL)
	{
		if (counter == idx)
		{
			newNode->next = myTempHead;
			newNode->prev = myTempHead->prev;
			if (myTempHead->prev != NULL)
				myTempHead->prev->next = newNode;
			myTempHead->prev = newNode;
			return (newNode);
		}
		counter++;
		myTempHead = myTempHead->next;
	}
	if (idx == counter)
	{
		newNode->prev = myTempHead;
		newNode->next = NULL;
		if (myTempHead != NULL)
			myTempHead->next = newNode;
		return (newNode);
	}
	free(newNode);
	return (NULL);
}
