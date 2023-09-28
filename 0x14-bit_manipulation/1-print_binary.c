#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int a, shift = 0;
	unsigned long int init;

	for (a = 63; a >= 0; a--)
	{
		init = n >> a;

		if (init & 1)
		{
			_putchar('1');
			shift++;
		}
		else if (shift)
			_putchar('0');
	}
	if (!shift)
		_putchar('0');
}
