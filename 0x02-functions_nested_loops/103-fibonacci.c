#include <stdio.h>
/**
 * main - Entry
 *
 * Return: (0)
 */

int main(void)
{
	long int i, x = 1, y = 2, sum = 0, tsum = 0;

	for (i = 0; i < 49; i++)
	{
		if ((y % 2 == 0) && (y <= 4000000))
		{
			tsum = tsum + y;
		}
		sum = x + y;
		x = y;
		y = sum;
	}

	printf("Sum of even Fibonacci numbers below 4 million: %ld\n", tsum);

	return (0);
}
