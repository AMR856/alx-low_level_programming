#include "main.h"
#include <stdio.h>

/**
 * leet - A function that encodes a string in 1337 way
 * @myString: The string to be encoded
 * Description: Just a description here
 * Return: It returns a pointer to the encoded string
*/

char *leet(char *myString)
{
	char *returned = myString;
	int myFirstArray[] = {4, 3, 0, 7, 1};
	char mySecondArray[] = {'A', 'E', 'O', 'T', 'L'};
	unsigned int i;

	while (*myString)
	{
		for (i = 0; i < sizeof(mySecondArray) / sizeof(char); i++)
		{
			if (*myString == mySecondArray[i] || *myString == (mySecondArray[i] + 32))
				*myString  = myFirstArray[i] + 48;
		}
		myString = myString + 1;
	}
	return (returned);
}
