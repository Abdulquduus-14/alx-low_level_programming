#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: pointer to start of list
 * @n: value of elemnt to add
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	if (head == NULL)
	{
		newnode->prev = head;
		newnode->next = NULL;
		/*(*head)->next = newnode; */
	}
	while (*head != NULL)
	{
		*head = (*head)->next;
	}
	(*head)->next = newnode;
	return (*head);
}
