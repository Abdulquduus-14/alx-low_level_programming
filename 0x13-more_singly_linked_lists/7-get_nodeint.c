#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node of a list.
 * @head: pointer to the beginning of the list
 * @index: position of the node to obtain its value
 *
 * Return: a pointer to the nth node of the list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h;
	unsigned int i = 0;


	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
