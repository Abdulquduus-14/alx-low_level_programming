#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: structure pointer to the link list
 * @str: string member of structure
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s;
	int l;
	list_t *new;

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
	new->next = *head;

	*head = new;
	return (new);
}
