#include "lists.h"
#include <string.h>

/**
 * add_node_end - A function to add a node at the end
 * @head: A pointer to the pointer who points at the first node
 * @str: A string the should be inputed into the newly created node
 *
 * Return: It returns a pointer to the newly created node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = (list_t *)malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while ((*head)->next != NULL)
		*head = (*head)->next;

	(*head)->next = newNode;
	return (newNode);
}


/**
 * _strlen - A function to get the length of a string
 * @myString: A pointer to the required string
 *
 * Return: It returns the length of the string
*/

int _strlen(const char *myString)
{
	int i = 0;
	const char *theIterator = myString;

	while (*theIterator)
	{
		i = i + 1;
		theIterator = theIterator + 1;
	}
	return (i);
}
