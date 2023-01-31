#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to beginning of list
 * @idx: the index of the list where the new node should be added.
 * @n: value of node to insert in the list
 *
 * Return: pointer to the list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *p, *q;

	unnsigned int k = 0;


	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	if (head == NULL)
		return (NULL);

	new->n = n;
	p = *head;
	while ((p != NULL) && (k < idx))
	{
		k++;
		q = p;
		p = p->next;
	}
	q->next = new;
	new->next = p;
	return (*head);
}
