#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

#define MY_BUFFER_SIZE 1024
void printingErrors(int, const char *, const char *);
void writtingBetween(const char *, const char *);

/**
 * main - entry point
 * @argc: The number of parameters
 * @argv: Pointer to the string that are inputed on the shell
 *
 * Return: many things
*/

int main(int argc, char **argv)
{
	char *fromFile, *toFile;

	if (argc != 3)
	{
		printingErrors(97, "Usage: cp file_from file_to", "");
	}
	fromFile = argv[1];
	toFile = argv[2];
	writtingBetween(fromFile, toFile);
	return (0);
}

/**
 * printingErrors - A function to print errors and exit
 * @myError: The number of the errro
 * @myMes: A pointer to the message to printed
 * @myString: The name of the files (SometimesUsed)
 *
 * Return: Nothing
*/

void printingErrors(int myError, const char *myMes, const char *myString)
{
	dprintf(STDERR_FILENO, "%s%s\n", myMes, myString);
	exit(myError);
}

/**
 * writtingBetween - A function that is used to copy contents
 * @firstFile: A pointer to the name of the first file
 * @secondFile: A pointer to the name of the second file
 *
 * Return: Nothing
*/

void writtingBetween(const char *firstFile, const char *secondFile)
{
	char myBuffer[MY_BUFFER_SIZE];
	ssize_t bytesRead, bytesWritten;
	int firstD, secondD;

	firstD = open(firstFile, O_RDONLY);
	if (firstD < 0)
		printingErrors(98, "Error: Can't read from file ", firstFile);
	secondD = open(secondFile, 0664);
	if (secondD < 0)
		printingErrors(99, "Error: Can't write to ", secondFile);
	while ((bytesRead = read(firstD, myBuffer, MY_BUFFER_SIZE)) > 0)
	{
		bytesWritten = write(secondD, myBuffer, bytesRead);
		if (bytesWritten < 0)
			printingErrors(99, "Error: Can't write to ", secondFile);
	}
	if (bytesRead < 0)
		printingErrors(98, "Error: Can't read from file ", firstFile);
	if (close(firstD) < 0)
		printingErrors(100, "Error: Can't close fd ", firstFile);
	if (close(secondD) < 0)
		printingErrors(100, "Error: Can't close fd ", secondFile);
}
