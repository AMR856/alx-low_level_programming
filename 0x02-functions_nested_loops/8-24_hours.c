#include "main.h"

/**
 * jack_bauer - A function that prints all the minutes of the day
 * Description: This function iterates over the hours of the day
 * and in each hour it iterates over all minutes in the hour
 * Return: Always returns 0 (Success)
*/

void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours <= 24; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
	return (0);
}
