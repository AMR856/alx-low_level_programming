#include "lists.h"

/**
 * find_listint_loop - A function to find a loop in the linked list
 * @head: A pointer to the head of the linked list
 *
 * Return: It returns the address of the node
 * in which the loop starts
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowPoi;
	listint_t *fastPoi;

	if (head == NULL)
		return (NULL);
	slowPoi = head, fastPoi = head;
	while (slowPoi != NULL && fastPoi != NULL && fastPoi)
	{
		slowPoi = slowPoi->next;
		fastPoi = fastPoi->next->next;
		if (slowPoi == fastPoi)
			return (fastPoi);
	}
	return (NULL);
}
