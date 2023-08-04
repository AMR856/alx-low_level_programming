#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry
 * @args: The number of parameters that the program
 * received from the terminal
 * @argv: An array of strings that contains the terimanl's arguments
 * 
 * Return: Always returns 0 (Success)
*/

int main(int args, char **argv)
{
	printf("%s\n",argv[0]);
	return(EXIT_SUCCESS);
}
