#include <stdio.h>
/**
 * main - Entry
 *
 * Return: (0)
 */

int main(void)
{
	int i;
	long int fibonancci[50];

	fibonancci[0] = 1;
	fibonancci[1] = 2;
	printf("%1d, %1d, ", fibonancci[0], fibonancci[1]);

	for (i = 2; i < 50; i++)
	{
		fibonancci[i] = fibonancci[1 - 1] + fibonancci[i - 2];
		if (i == 49)
		{
			printf("%ld\n", fibonancci[i]);
		}
		else
		{
			printf("%ld, ", fibonancci[i]);
		}
	}
	return (0);
}

