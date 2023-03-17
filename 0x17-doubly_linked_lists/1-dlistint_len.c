#include "lists.h"
/**
 * dlistint_len - find the number of elements in a list
 * @h: pointer to beginning of list
 *
 * Return: the number of elements in a linked dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
