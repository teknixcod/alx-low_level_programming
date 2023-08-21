#include "main.h"
/**
 * void swap_int - function that swaps the values of two integers.
 * @a: value a
 * @b: value b
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
