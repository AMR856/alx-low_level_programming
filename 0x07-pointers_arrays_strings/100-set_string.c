#include "main.h"

/**
 * set_string - A function that does a weird thing
 * @s: A pointer to a pointer
 * @to: The pointer that we want to point to
 * using the pointer to a pointer
 * Return: It returns void (Nothing)
*/

void set_string(char **s, char *to)
{
	*s = to;
}
