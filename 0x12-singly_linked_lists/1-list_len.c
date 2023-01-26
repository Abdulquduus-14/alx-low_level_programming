#include "list.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: structure pointer to the start of the link
 *
 * Return: the number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0


	while (h != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
