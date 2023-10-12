#include "lists.h"

/**
 * sum_dlistint - A function to get the sum of the data
 * @head: A pointer to the head of the list
 *
 * Return: The sum or 0
*/

int sum_dlistint(dlistint_t *head)
{
	int mySum = 0;
	dlistint_t *myTempHead = head;

	if (head == NULL)
		return (0);
	while (myTempHead != NULL)
	{
		mySum = mySum  + myTempHead->n;
		myTempHead = myTempHead->next;
	}
	return (mySum);
}
