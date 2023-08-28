#include "lists.h"

/**
 * listint_len - A function that calculates the number of
 * elements in the linked list
 * @h: A pointer to the head of the linked list
 *
 * Return: It returns the number of the elements in the linked list
*/

size_t listint_len(const listint_t *h)
{
	int mySize = 0;
	const listint_t *myPointer;
	
	myPointer = h;
	if (h == NULL)
		return (0);

	while (myPointer != NULL)
	{
		myPointer = (*myPointer).next;
		mySize++;
	}
	return (mySize);
}
