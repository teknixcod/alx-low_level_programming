#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet x10 times.
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	int k, j;

	for (k = 1; k <= 10; k++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

