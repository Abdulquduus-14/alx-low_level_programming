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
	dlistint_t *current = h;

	while (current != NULL)
	{
		length++;
		current = current->next;
	}
	return (length);
}
