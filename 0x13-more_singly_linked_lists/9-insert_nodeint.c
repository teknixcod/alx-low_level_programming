#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int init;
	listint_t *data;
	listint_t *list = *head;

	data = malloc(sizeof(listint_t));
	if (!data || !head)
		return (NULL);

	data->n = n;
	data->next = NULL;

	if (idx == 0)
	{
		data->next = *head;
		*head = data;
		return (data);
	}

	for (init = 0; list && init < idx; init++)
	{
		if (init == idx - 1)
		{
			data->next = list->next;
			list->next = data;
			return (data);
		}
		else
			list = list->next;
	}

	return (NULL);
}

