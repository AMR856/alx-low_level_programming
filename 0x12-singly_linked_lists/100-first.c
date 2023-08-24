#include <stdio.h>

void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - A function thar prints a sentence before starting the program
 *
 * Return: It returns nothing (void)
*/

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon");
	printf(" my back!\n");
}
