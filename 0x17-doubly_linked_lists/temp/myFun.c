#include "myLists.h"

/**
 * delete_dnodeint_at_index - A function to delete a node
 * at a specfic index
 * @head: A pointer to a pointer that points to the head
 * @index: Index of the deleted node
 *
 * Return: 0 or 1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *myTempHead = *head;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = myTempHead->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(myTempHead);
		return (1);
	}
	while (myTempHead != NULL && counter < index)
	{
		myTempHead = myTempHead->next;
		counter++;
	}
	if (myTempHead == NULL)
		return (-1);
	if (myTempHead->prev != NULL)
		myTempHead->prev->next = myTempHead->next;
	if (myTempHead->next != NULL)
		myTempHead->next->prev = myTempHead->prev;
	free(myTempHead);
	return (1);
}
