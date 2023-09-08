#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - A function to append text to the end
 * of the file
 * @filename: A pointer to the filename
 * @text_content: A pointer to the content to be printed
 *
 * Return: 1 or -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int myFileD, conditionPara;

	if (filename == NULL)
		return (-1);
	myFileD = open(filename, O_APPEND | O_WRONLY);
	if (myFileD < 0)
		return (-1);
	if (text_content != NULL)
	{
		conditionPara = write(myFileD, text_content, strlen(text_content));
		if (conditionPara < 0)
		{
			close(myFileD);
			return (-1);
		}
	}
	else
	{	close(myFileD);
		return (1);
	}
	close(myFileD);
	return (1);
}
