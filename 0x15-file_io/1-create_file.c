#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - A function to create a file
 * @filename: A pointer to the name of the file
 * @text_content: The number to be writted to the file
 *
 * Return: 1 or -1
*/

int create_file(const char *filename, char *text_content)
{
	int myFileD;
	ssize_t myBytes;

	if (filename == NULL)
		return (0);
	myFileD = creat(filename, 0600);
	if (myFileD < 0)
		return (-1);
	if (text_content != NULL)
		myBytes = write(myFileD, text_content, strlen(text_content));
	else
	{
		close(myFileD);
		return (1);
	}
	if (myBytes < 0)
	{
		close(myFileD);
		return (-1);
	}
	close(myFileD);
	return (1);

}
