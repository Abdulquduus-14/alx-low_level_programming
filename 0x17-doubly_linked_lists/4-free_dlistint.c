#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: pointer to list
 *
 * Return: void or nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;


	if (head == NULL)
		return;
	while (head)
	{
		t = head->next;
		free(head->n);
		free(head);
		head = t;
	}
}
