#include "main.h"
#include <stdio.h>

/**
 * _strlen - A function to get the length of string
 * @s: The pointer to the string
 * Description: This function loops through
 * the string until it finds a null termintor and
 * in each char that is not a null it increments the
 * counter by 1
 * Return: The length of the string
*/

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*s != '\0')
	{
		s++;
		counter++;
	}
	return (counter);
}

/**
 * leet - A function that encodes a string in 1337 way
 * @myString: The string to be encoded
 * Description: Just a description here
 * Return: It returns a pointer to the encoded string
*/

char *leet(char *myString)
{
	char *cp = myString;
	char myFirstArray[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char mySecondArray[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int strLength, i, j;

	strLength = _strlen(myString);
	for (i = 0; i < strLength; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (cp[i] == cp[j])
				cp[i] = cp[j];
		}
	}
	return (cp);
}
