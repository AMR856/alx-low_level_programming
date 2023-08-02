#include "main.h"
/**
 * _pow_recursion - A function that returns the number
 * raised to a specfic power
 * @x: The number in the base
 * @y: The power
 *
 * Return: It returns the result of the number x
 * raised to the power y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
