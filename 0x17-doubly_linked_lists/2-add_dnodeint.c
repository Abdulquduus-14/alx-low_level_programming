#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: pointer to start of list
 * @n: value of elemnt to add
 *
 * Return: the address of the new element on success, else NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *link;

	link = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!link)
		return (NULL);
	link->n = n;

	if (*head == NULL)
		*head = link
	else
		(*head)->prev = link;
	return (*head);
}
