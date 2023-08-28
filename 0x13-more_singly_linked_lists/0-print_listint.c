#include "lists.h"

/**
 * print_listint - A function to print the contains of the list
 * @h: A pointer to the head of the linked list
 *
 * Return: It returns the number of elements in the linked list
*/

size_t print_listint(const listint_t *h)
{
	size_t theSize = 0;
	const listint_t *myPointer = h;

	if (myPointer == NULL)
		return (0);
	while (myPointer != NULL)
	{
		printf("%d\n", (*myPointer).n);
		theSize = theSize + 1;
		myPointer = (*myPointer).next;
	}
	return (theSize);
}
