#include "lists.h"

/**
 * free_listint_safe2 - function that frees a listint_t list.
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *list;
	listp_t *latest;

	if (head != NULL)
	{
		latest = *head;
		while ((list = latest) != NULL)
		{
			latest = latest->next;
			free(list);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t newn = 0;
	listp_t *headpt, *n, *sum;
	listint_t *latest;

	headpt = NULL;
	while (*h != NULL)
	{
		n = malloc(sizeof(listp_t));

		if (n == NULL)
			exit(98);

		n->p = (void *)*h;
		n->next = headpt;
		headpt = n;

		sum = headpt;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (*h == sum->p)
			{
				*h = NULL;
				free_listp2(&headpt);
				return (newn);
			}
		}

		latest = *h;
		*h = (*h)->next;
		free(latest);
		newn++;
	}

	*h = NULL;
	free_listp2(&headpt);
	return (newn);
}
