#include <stdio.h>
#include "main.h"

/**
 * rot13 - A function to encrypt letters using rot13
 * @myString: String to be encrypted
 * Description: Nothing
 * Return: It returns a pointer to the start of the
 * encrypted string
*/

char *rot13(char *myString)
{
	char l1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char l2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	unsigned int i;
	char *returned = myString;

	while (*myString)
	{
		for (i = 0; i < sizeof(l1) / sizeof(char); i++)
		{
			if (*myString == l1[i])
				*myString = l2[i];
				break;
		}
		myString = myString + 1;
	}
	return (returned);
}
