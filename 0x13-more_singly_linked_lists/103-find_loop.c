#include "lists.h"


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
