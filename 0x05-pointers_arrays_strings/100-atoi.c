#include "main.h"

/**
 * _atoi - A function that converts a string to integer
 * @s: The required string to be converted
 * Description:This function loops through each digits and
 * check some conditions to get the required integer
 * Return: It returns the integer in the string
*/

int _atoi(char *s)
{
	int i, strLength, oddSigns, flag, lastNumber, digit;

	i = 0;
	strLength = 0;
	oddSigns = 0;
	flag = 0;
	lastNumber = 0;
	digit = 0;

	while (s[strLength] != '\0')
		strLength++;

	while (i < strLength && flag == 0)
	{
		if (s[i] == '-')
			oddSigns = oddSigns + 1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (oddSigns % 2 != 0)
				digit = -1 * digit;
			lastNumber = lastNumber * 10 + digit;

			flag = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			flag = 0;
		}
		i++;
	}

	if (flag == 0)
		return (0);
	return (lastNumber);
}
