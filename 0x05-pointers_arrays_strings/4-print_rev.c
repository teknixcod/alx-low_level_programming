#include "main.h"
/**
 * print_rev -  function that prints a string, in reverse, followed by a new line.
 * @s: output string
 * Return: 0
 */

void print_rev(char *s)
{
	int tek = 0;
	int o;

	while (*s != '\0')
	{
		tek++;
		s++;
	}
	s--;
	for (o = tek; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
