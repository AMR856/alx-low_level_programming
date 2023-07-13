#include <unistd.h>

/**
 * main - entry point
 * Description: A C program that prints a message using write function
 * and the message is going to be printed to the standard error
 * Return: Always returns 1 (Failure)
*/

int main(void)
{
	char meg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, meg, 59);
	return (1);
}
