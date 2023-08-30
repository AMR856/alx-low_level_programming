#include "lists.h"

/**
 * new - A function to make a temp array to store
 * the looped in address
 * @oL: The address of the old list before updating
 * @myS: The new size of the list
 * @myN: The number to be added into the list
 *
 * Return: Nothing
*/

const listint_t **new(const listint_t **oL, size_t myS, const listint_t *myN)
{
	const listint_t **myNewList;
	size_t i;

	myNewList = malloc(sizeof(listint_t *) * myS);
	if (myNewList == NULL)
	{
		free(myNewList);
		exit(98);
	}
	for (i = 0; i < myS - 1; i++)
	{
		myNewList[i] = oL[i];
	}
	myNewList[i] = myN;
	free(oL);
	return (myNewList);
}

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
	size_t i, mySize = 0;
	const listint_t **myList = NULL;

	while (head != NULL)
	{
		for (i = 0; i < mySize; i++)
		{
			if (myList[i] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->next->n);
				free(myList);
				return (mySize);
			}
		}
		mySize++;
		myList = new(myList, mySize, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(myList);
	return (mySize);
}
