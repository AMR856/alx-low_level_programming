#include "lists.h"

/**
 * print_list - A function that prints the elements of a linked list
 * @h: A pointer to the head of the linked list
 *
 * Return: It returns the number of elements in the linked list
*/

size_t print_list(const list_t *h)
{
	const list_t *myHead;
	size_t counter = 0;

	myHead = h;
	if (h == NULL)
		return (0);
	while (myHead != NULL)
	{
		if (myHead->str != NULL)
		{
			printf("[%d] %s\n", myHead->len, myHead->str);
			counter = counter + 1;
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
			counter = counter + 1;
		}
		myHead = myHead->next;
	}
	return (counter);
}
