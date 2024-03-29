#include "lists.h"
/**
 * sum_listint - find the sum of all the data (n) of a list.
 * @head: pointer to the beginning of the lsit.
 *
 * Return: returns the sum of all the data (n) of a list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
