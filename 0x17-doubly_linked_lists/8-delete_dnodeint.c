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
	if (index == 0)
	{
		*head = (*head)->next;

		if (*head != NULL)
			(*head)->prev = NULL;
		free(t);
	}
	return (1);
}
