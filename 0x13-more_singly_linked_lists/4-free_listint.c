#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to beginning of list.
 *
 */
void free_listint(listint_t *head)
{
	listint_t *h;


	while (head)
	{
		h = head->next;
		free(head);
		head = h;
	}
}
