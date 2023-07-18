#include "main.h"

/**
 * _abs: A function that returns the abs value of an integer
 * @r: The number that we want its absolute value
 * Description: This function checks if the number is bigger than
 * zero or smaller and if it is smaller than it multiplies it by -1
 * Return: It returns the absolute value of the integer
*/

int _abs(int r)
{
	if (r < 0)
	{
		r = r * -1;
		return (r);
	}
	else if (r >= 0)
	{
		return (r);
	}
}
