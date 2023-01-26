#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: structure pointer of list_t type
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i; /* node counter */

	i = 0;

	if (!h)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}
