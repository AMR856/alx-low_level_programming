#include "lists.h"

/**
 * dlistint_len - A function to get the length
 * a doubly linked list
 * @h: A pointer to the head of the list
 *
 * Return: The number of elements in the list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
