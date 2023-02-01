#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to beginning of list
 * @idx: the index of the list where the new node should be added.
 * @n: value of node to insert in the list
 *
 * Return: pointer to the list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *p;

	unsigned int k = 0;


	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	p = *head;
	if (idx == 0)
	{
		new->next = p;
		*head = new;
		return (new);
	}

	while (k < (idx - 1))
	{
		if (p == NULL || p->next == NULL)
			return (NULL);
		p = p->next;
	}
	new->next = p->next;
	p->next = new;

	return (new);
}
