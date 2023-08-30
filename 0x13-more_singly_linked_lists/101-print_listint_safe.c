#include "lists.h"

/**
 * print_listint_safe - A function to print a linked list in
 * a safe manner
 * @head: A pointer that points to the head of the linked
 * list
 *
 * Return: It returns the number of elements in the linked list
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *currentNode;
	size_t counter = 0;
	long int myDiff;

	if (head == NULL)
	{
		exit(98);
	}
	currentNode = head;
	while (currentNode != NULL)
	{
		myDiff = currentNode - currentNode->next;
		counter = counter + 1;
		printf("[%p] %d\n", (void *)currentNode, currentNode->n);
		if (myDiff > 0)
		{
			currentNode = currentNode->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (counter);
}
