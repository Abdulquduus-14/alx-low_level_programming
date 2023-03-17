#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a list
 * @head: pointer to the start of the list
 * @index: position of the node, starting from 0
 *
 * Return: the nth node of a dlistint_t linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		/* head = head->next; */
		if (index == i)
			break;
		head = head->next;
		i++;
	}
	return (head);
}

