#include "main.h"
#include <unistd.h>
#include <fcntl.h>

#define MY_BUFFER_SIZE (20 * 1024) /* Size of the buffer */

/**
 * read_textfile - A function to read from a file and print
 * to posif output
 * @filename: A pointer to the file that we wantto read
 * @letters: The number of letters to be printed
 *
 * Return: NULL or 0 or the number of bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int myFileD;
	ssize_t myBytes;
	char myBuffer[MY_BUFFER_SIZE];

	if (filename == NULL)
		return (0);

	myFileD = open(filename, O_RDONLY);
	if (myFileD < 0)
		return (0);
	myBytes = read(myFileD, myBuffer, letters);
	if (myBytes < 0)
	{
		close(myFileD);
		return (0);
	}
	myBytes = write(STDOUT_FILENO, myBuffer, myBytes);
	if (myBytes < 0)
	{
		close(myFileD);
		return (0);
	}
	close(myFileD);
	return (myBytes);
}
