#include "main.h"

/**
 * puts2 - A function that prints every other char
 * of a string
 * @str: The pointer to the string
 * Description: This function loops through
 * each other char in the string and prints it on
 * the stdout using putchar function
 * and in the end it prints a newline
 * Return: It returns void (Nothing)
*/

void puts2(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		if (str[1] != '\0')
			str = str + 2;
		else
			break;
	}
	putchar('\n');
}
