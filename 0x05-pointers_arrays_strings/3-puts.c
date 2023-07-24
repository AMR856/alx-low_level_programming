#include "main.h"

/**
 * _puts - A function that prints a string on the stdout
 * @str: The pointer to the string
 * Description: This function loops through
 * each char in the string and prints it on
 * the stdout using putchar function
 * and in the end it prints a newline
 * Return: It returns void (Nothing)
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		s++;
	}
	putchar('\n');
}
