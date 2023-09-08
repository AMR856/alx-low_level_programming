#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

#define MY_BUFFER_SIZE 1024
#define ERROR97 "Usage: cp file_from file_to"
#define ERROR98 "Error: Can't read from file "
#define ERROR99 "Error: Can't write to "
#define ERROR100 "Error: Can't close fd "

void printmyError(const char *, const char *);
void closingFiles(int *);
void writtingBetweenFiles(int *, int *, char *, const char *, const char *, char *);

int main(int argc, char** argv)
{
	int myFileD1, myFileD2;
	char *myBuffer[MY_BUFFER_SIZE];
	const char *fromFile;
	const char *toFile;
	if (argc != 3)
	{
		printmyError(ERROR97, "");
		exit(97);
	}
	fromFile = argv[1];
	toFile = argv[2];

	myFileD1 = open(fromFile, O_RDONLY);
	if (myFileD1 < 0)
	{
		printmyError(ERROR98, fromFile);
		exit(98);		
	}
	myFileD2 = open(toFile, 0664);
	if (myFileD2 < 0)
	{
		printmyError(ERROR99, itoa(myFileD2));
		exit(99);
	}
	writtingBetweenFiles(myFileD1, myFileD2, myBuffer, fromFile, toFile);
	closingFiles(&myFileD1);
	closingFiles(&myFileD2);
	return (0);
}

void printmyError(const char *myMessage, const char *theParameter)
{
	dprintf(STDERR_FILENO, "%s%s\n", myMessage, theParameter); 
}

void closingFiles(int *myD)
{
	if (close(*myD) < 0)
	{
		printmyError(ERROR100,(char *)myD);
		exit(100);
	}
}

void writtingBetweenFiles(int *f, int *s, char *myB, const char *one, const char *two)
{
	ssize_t bytesRead, bytesWritten;
	while ((bytesRead = read(*f, myB, MY_BUFFER_SIZE)) < 0)
	{
		bytesWritten = write(*s, myB, bytesRead);
		if (bytesWritten < 0)
		{
			printmyError(ERROR99, two);
			exit(99);
		}
	}
	if (bytesRead < 0)
	{
		printmyError(ERROR98, itoa(f));
		exit (98);
	}
	(void)one;
}
