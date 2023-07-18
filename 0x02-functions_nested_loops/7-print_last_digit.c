#include "main.h"

int print_last_digit(int r)
{
	if (r < 0)
	{
		r = r * -1;
	}
	char temp;
	while (r > 9)
	{
		temp = r % 10;
		_putchar(temp);
		r = r / 10;	
	}
	if (r > 9)
	{
		return temp;
	}
	return (0);
}
