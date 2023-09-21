#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nstr;
	list_t *temp_add = *head;
	unsigned int len = 0;

	for (len = 0; str[len]; len++)
	;
	nstr = malloc(sizeof(list_t));
	if (!nstr)
		return (NULL);

	nstr->str = strdup(str);
	nstr->len = len;
	nstr->next = NULL;

	if (*head == NULL)
	{
		*head = nstr;
		return (nstr);
	}

	for (; temp_add->next; temp_add = temp_add->next)
	;

	temp_add->next = nstr;

	return (nstr);
}

