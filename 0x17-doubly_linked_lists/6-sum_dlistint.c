#include "lists.h"

/**
 * sum_dlistint - gets the sum of all the data (n) of alist
 * @head: pointer to the start of list
 *
 * Return: the sum of all the data of the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
