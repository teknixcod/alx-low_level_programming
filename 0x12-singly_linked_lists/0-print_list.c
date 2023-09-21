#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *elements)
{
	size_t i = 0;

	for (; elements; elements = elements->next)
	{
		if (!elements->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", elements->len, elements->str);
		i++;
	}

	return (i);
}
