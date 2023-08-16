#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - A function to add two numbers
 * @a: The first num
 * @b: The second num
 *
 * Return: The result of adding a and b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - A function to subtract two numbers
 * @a: The first num
 * @b: The second num
 *
 * Return: The result of subtracting a and b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - A function to mulitple two numbers
 * @a: The first num
 * @b: The second num
 *
 * Return: The result of mulitpling a and b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - A function to divide two numbers
 * @a: The first num
 * @b: The second num
 *
 * Return: The result of dividing a and b
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - A function to take the mod of two nums
 * @a: The first num
 * @b: The second num
 *
 * Return: It returns the result of modding
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
