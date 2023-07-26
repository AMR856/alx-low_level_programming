#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
 * main - entry point
 * Description: This function has to get a random
 * string that its ASCII values summed equals to 0xad4
 * Return: Always returns 0 (Success)
*/

int main(void)
{
	char myString[64];
	time_t t;
	int i, sum, tmp, theRequiredNum;

	srand((unsigned int) time(&t));
	i = 0;
	sum = 0;
	theRequiredNum = 0xad4;
	while (i < 64)
	{
		if (theRequiredNum - sum > 126)
			tmp = rand() % 83 + 44;
		else if (theRequiredNum - sum < 126 && theRequiredNum - sum > 44)
		{
			tmp = theRequiredNum - sum;
			myString[i] = tmp;
			myString[i + 1] = '\0';
			break;
		}
		else
		{
			i = 0;
			sum = 0;
			continue;
		}
		sum = sum + tmp;
		myString[i] = tmp;
		myString[i + 1] = '\0';
		i++;
	}
	printf("%s", myString);
	return (0);
}
