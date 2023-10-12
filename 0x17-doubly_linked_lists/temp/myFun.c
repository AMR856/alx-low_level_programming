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
	unsigned counter = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		myTempHead->next->prev = NULL;
		myTempHead->prev = NULL;
		*head = myTempHead->next;
		free(myTempHead);
		return (1);
	}
	while (myTempHead != NULL)
	{
		if (counter == index)
		{
			myTempHead->prev->next = myTempHead->next;
			myTempHead->next = myTempHead->prev;
			free(myTempHead);
			return (1);
		}
		counter++;
		myTempHead = myTempHead->next;
	}
	if (index == counter)
	{
		myTempHead->prev->next = NULL;
		free(myTempHead);
		return (1);
	}
	return (-1);
}