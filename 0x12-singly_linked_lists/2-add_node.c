#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nstr;
	unsigned int len = 0;

	for (len = 0; str[len]; len++)

	nstr = malloc(sizeof(list_t));
	if (!nstr)
		return (NULL);

	nstr->str = strdup(str);
	nstr->len = len;
	nstr->next = (*head);
	(*head) = nstr;

	return (*head);
}
