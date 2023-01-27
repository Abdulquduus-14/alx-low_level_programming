#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double structure pointer to list
 * @str: string to name structure member
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	int l;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	s = strdup(str);
	if (!s)
	{
		free(new);
		return (NULL);
	}
	for (l = 0; str[l]; l++)
	{
	}
	new->str = s;
	new->len = l;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
