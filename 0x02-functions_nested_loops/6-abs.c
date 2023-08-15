#include "main.h"

/**
 * _abs - This computes the absolute value of an integer.
 * @n: the number to be computed
 * Return: absolute value of n, otherwise n itself
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}

