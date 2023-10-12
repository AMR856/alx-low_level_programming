#include "lists.h"

/**
 * get_dnodeint_at_index - A function to return a node at
 * a specfic index
 * @head: A pointer to the head of the list
 * @index: The index that we want to get its node
 *
 * Return: NULL or the node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *myTempHead = head;

	if (head == NULL)
		return (NULL);

	while (myTempHead != NULL)
	{
		if (counter == index)
			return (myTempHead);

		myTempHead = myTempHead->next;
		counter++;
	}

	return (NULL);
}
