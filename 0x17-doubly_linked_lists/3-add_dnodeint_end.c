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
	dlistint_t *newnode, *t;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	/*(*head)->next = newnode; */
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		t = *head;
		while (t->next != NULL)
			t = t->next;
		t->next = newnode;
	}
	return (*head);
}
