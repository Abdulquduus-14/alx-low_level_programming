#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list.
 * @head: double pointer to list
 * @n: number to insert for member
 *
 * Return: the address of the new element, or NULL if error.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *hold;

	hold = malloc(sizeof(listint_t));
	if (!hold)
		return (NULL);

	hold->n = n;
	hold->next = *head;

	*head = hold;
	return (hold);
}
