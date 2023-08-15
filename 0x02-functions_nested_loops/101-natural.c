#include <stdio.h>

/**
 * main - function that prints the n times table, starting with 0.
 *
 * Return: (0)
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5 == 0) || (i % 3 == 0))
			sum += i;
	}

	printf("%d\n", sum);
	return (0);
}

