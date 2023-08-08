#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - A function to concatenate command line arguments
 * @ac: Number of command line arguments
 * @av: A pointer to the arguments
 *
 * Return: NULL or a pointer to dynamically allocated array
*/

char *argstostr(int ac, char **av)
{
	char *result;
	int i, totalLen = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < ac; i++)
			totalLen = totalLen + strlen(av[i]) + 1;
		result = (char *)malloc(totalLen * sizeof(char) + 1);

		if (result == NULL)
		{
			return (NULL);
		}
		else
		{
			strcpy(result, av[0]);
			strcat(result, "\n");
			for (i = 1; i < ac; i++)
			{
				strcat(result, av[i]);
				strcat(result, "\n");
			}
		}
		return (result);
	}
}
