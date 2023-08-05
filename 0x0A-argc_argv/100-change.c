#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: Number of parameters that was through the terminal
 * @argv: Pointer to the string that was passed through
 * the terminal
 *
 * Return: Always returns 0 (Success)
*/

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i;
		int cents = 0, amount = atoi(argv[1]);
		int centsArray[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (amount >= centsArray[i])
			{
				cents = cents + amount / centsArray[i];
				amount = amount % centsArray[i];
				if (amount % centsArray[i] == 0)
					break;
			}
		}
		printf("%d\n", cents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (EXIT_SUCCESS);

}
