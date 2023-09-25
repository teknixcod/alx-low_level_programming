#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *elements)
{
	size_t me = 0;

	while (elements)
	{
		printf("%d\n", elements->n);
		me++;
		elements = elements->next;
	}

	return (me);
}
