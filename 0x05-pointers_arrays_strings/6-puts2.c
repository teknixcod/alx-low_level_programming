#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int tek = 0;
	int j = 0;
	char *k = str;
	int o;

	while (*k != '\0')
	{
		k++;
		tek++;
	}
	j = tek - 1;
	for (o = 0 ; o <= j; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
