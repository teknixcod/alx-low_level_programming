#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int init = 0;
	listint_t *list = head;

	while (list && init < index)
	{
		list = list->next;
		init++;
	}

	return (list ? list : NULL);
}

