#include "main.h"

/**
 * numLength - A function that returns the length of an intger
 * @num: The number that we want to get its length
 * Description: it uses dividing method to get the length
 * with some loops
 * Return: It returns the length of the integer
*/

int numLength(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)

	{
		num = num / 10;
		length = length + 1;
	}
	return (length);
}

/**
 * main - entry point
 * Description: A function that prints the fib series
 * for long numbers without using long long but with splitting
 * the integer into two parts
 * Return: Always returns 0 (Success)
*/

int main(void)
{
	unsigned long f1 = 1, f2 = 2, tmp, mx = 100000000, f1o = 0, f2o = 0, tmpo = 0;
	short int i = 1, initials0s;

	while (i <= 98)
	{
		if (f1o > 0)
			printf("lu", f1o);
		initials0s = numLength(mx) - 1 - numLength(f1);
		while (f1o > 0 && initials0s > 0)
		{
			printf("%i", 0);
			initials0s = initials0s - 1;
		}
		printf("%lu", f1);

		tmp = (f1 + f2) % mx;
		tmpo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = tmp;
		f2o = tmpo;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
		i++;
	}
	return (0);
}
