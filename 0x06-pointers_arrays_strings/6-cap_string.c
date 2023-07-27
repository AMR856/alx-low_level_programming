#include "main.h"

/**
 * cap_string - A function that converts the starting
 * of each word to capital letter
 * @myString: The string that we have to convert its
 * words starting
 * Description: This function loops through each letter and
 * tries do check some if conditions to solve the required problem
 * Return: It returns a poniter to the same last string but
 * with its edit
*/


char *cap_string(char *myString)
{
	int index = 0;

	while (myString[index])
	{
		while (!(myString[index] >= 'a' && myString[index] <= 'z'))
		{
			index = index + 1;
		}
			if (myString[index - 1] == ',' ||
			myString[index - 1] == '\t' ||
			myString[index - 1] == '\n' ||
			myString[index - 1] == ' ' ||
			myString[index - 1] == '.' ||
			myString[index - 1] == ';' ||
			myString[index - 1] == '?' ||
			myString[index - 1] == '!' ||
			myString[index - 1] == '"' ||
			myString[index - 1] == '(' ||
			myString[index - 1] == ')' ||
			myString[index - 1] == '{' ||
			myString[index - 1] == '}' ||
			index == 0)
				myString[index] = myString[index] - 32;
		index = index + 1;
	}
	return (myString);
}
