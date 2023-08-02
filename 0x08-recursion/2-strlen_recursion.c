#include "main.h"

int _strlen_recursion(char *s)
{
	int myCounter = 0;
        if (*s == '\0')
        {
		return myCounter;
        }
	myCounter = myCounter + 1;
	return myCounter + _strlen_recursion(s + 1);
}
