#include "lists.h"

/**
 * print_dlistint - A function to print the elements of
 * a doubly linked list
 * @h: A pointer to the head of the list
 *
 * Return: The number of elements in the list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
