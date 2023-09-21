#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @noe: pointer to the list_t list
 *
 * Return: number of elements in noe
 */
size_t list_len(const list_t *noe)
{
	size_t x = 0;

	for (; noe; x++, noe = noe->next)
	{
		x++;
		noe = noe->next;
	}
	return (x);
}
