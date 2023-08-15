#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: the number to be checked
 * Return: 1 for positive, -1 for negative, and 0 for zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
