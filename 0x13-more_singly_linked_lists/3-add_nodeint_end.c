#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: double pointer to start of list.
 * @n: integral value to insert for member
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h, *last;

	h = malloc(sizeof(listint_t));
	if (!h)
		return (NULL);
	h->n = n;
	h->next = NULL;

	if (*head == NULL)
		*head = h;
	else
	{
		last = *head;
		while (last)
			last = last->next;
		last = h;
	}
	return (*head);
}
