#include "lists.h"

/**
 * free_listint_safe - A function to free a linked list safely
 * @h: A pointer to a pointer that points to the head
 * of the linked list
 *
 * Return: It returns the number of elements in the linked list
*/

size_t free_listint_safe(listint_t **h)
{
	long mydiff = 0;
	int listLength = 0;
	listint_t *tempNode;

	if (*h == NULL || h == NULL)
		return (0);
	while (*h != NULL)
	{
		mydiff = *h - (*h)->next;
		if (mydiff > 0)
		{
			tempNode = (*h)->next;
			free(*h);
			*h = tempNode;
			listLength++;
		}
		else
		{
			free(*h);
			*h = NULL;
			listLength++;
			break;
		}
	}
	*h = NULL;
	return (listLength);
}
