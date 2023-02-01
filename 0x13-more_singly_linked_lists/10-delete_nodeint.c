#include "lists.h"
/**
 * @head: pointer to beginning of list
 * @index: he index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *h;


	if (head == NULL)
		return (-1);

	while (*head)
	{
		if (i == index)
		{
			h = (*head)->next;
			free(*head);
			*head = h;
			return (1);
		}
		*head = (*head->next);
		i++;
	}
	return (-1);
	
}
