#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * @name: The name that should be printed
 * @f: A pointer to a function that will print the name
 *
 * Return: It returns void (Nothing)
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
