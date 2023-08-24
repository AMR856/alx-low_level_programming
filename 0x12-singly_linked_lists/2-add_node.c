#include "lists.h"
#include <string.h>

/**
 * add_node - A function to add element at the beginning
 * of the linked list
 * @head: A pointer to the head of the linked list
 * @str: The string the to be copied into
 * the new created node
 *
 * Return: It returns the address of the newly created
 * element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newElement;

	newElement = (list_t *)malloc(sizeof(list_t));
	if (newElement == NULL)
		return (NULL);
	newElement->str = strdup(str);
	newElement->len = _strlen(str);
	newElement->next = *head;
	*head = newElement;
	return (newElement);
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
