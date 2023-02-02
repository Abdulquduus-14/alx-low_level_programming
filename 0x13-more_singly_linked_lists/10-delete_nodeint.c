#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: pointer to beginning of list
 * @index: he index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *t, *p = *head;


	if (p == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(p);
		return (1);
	}

	while (i < (index - 1))
	{
		if (p->next == NULL)
			return (-1);
		p = p->next;
		i++;
	}
	t = p->next;
	p->next = t->next;
	free(t);
	return (1);
}
