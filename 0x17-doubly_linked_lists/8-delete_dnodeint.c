#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a particular position
 * @head: pointer to the start of the list
 * @index: the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *t, *t2;
	int k = 0;

	t = *head;
	if (*head == NULL)
		return (-1);
	if (index == 1)
	{
		*head = (*head)->next;

		if (*head != NULL)
			(*head)->prev = NULL;
		free(t);
	}
	while ((k < index) && t->next != NULL)
	{
		t = t->next;
		k++;
	}
	if (k != index - 1)
		return (-1);
	t2 = t->prev;
	t2->next = t->next;

	if (t->next)
		t->next->prev = t2;
	free(t);
	return (1);
}

