#include "lists.h"

/**
 * sum_listint - A function to get the sum of data in a linked list
 * @head: A pointer to the head of the linked list
 *
 * Return: It returns the sum of the data in the linked list
*/

int sum_listint(listint_t *head)
{
	int theSum = 0;
	listint_t *currentNode;

	if (head == NULL)
		return (0);
	currentNode = head;
	while (currentNode != NULL)
	{
		theSum = theSum + (*currentNode).n;
		currentNode = (*currentNode).next;
	}
	return (theSum);
}
