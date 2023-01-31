#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to beginning of list
 *
 * Return: returns the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int i;

	if (head == NULL)
		return (0);

	h = *head;
	i = (*head)->n;
	*head = (*head)->next;

	free(h);
	return (i);
}
