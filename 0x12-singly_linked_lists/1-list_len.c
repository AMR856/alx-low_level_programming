#include "lists.h"

/**
 * list_len - A function that returns the length
 * of the linked list
 * @h: A pointer to the head of the linked list
 *
 * Return: It returns the number of elements in the linked list
*/

size_t list_len(const list_t *h)
{
	const list_t *myHead;
	size_t counter = 0;

	myHead = h;
	if (h == NULL)
		return (0);
	while (myHead != NULL)
	{
		counter = counter + 1;
		myHead = myHead->next;
	}
	return (counter);
}
