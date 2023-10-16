#include <stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
int mod(int, int);

/**
 * add - A function to add two numbers
 * @x: The first
 * @y: The second
 *
 * Return: The result of the operation
*/

int add(int x, int y)
{
	return (x + y);
}

/**
 * sub - A function to sub two numbers
 * @x: The first
 * @y: The second
 *
 * Return: The result of the operation
*/

int sub(int x, int y)
{
	return (x - y);
}

/**
 * mul - A function to mul two numbers
 * @x: The first
 * @y: The second
 *
 * Return: The result of the operation
*/

int mul(int x, int y)
{
	return (x * y);
}

/**
 * div - A function to div two numbers
 * @x: The first
 * @y: The second
 *
 * Return: The result of the operation
*/
int div(int x, int y)
{
	return (x / y);
}

/**
 * mod - A function to mod two numbers
 * @x: The first
 * @y: The second
 *
 * Return: The result of the operation
*/

int mod(int x, int y)
{
	return (x % y);
}
