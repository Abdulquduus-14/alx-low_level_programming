#include "lists.h"
#include <string.h>

/**
 * free_list - function that frees a list_t list
 * @head: structure pointer to link
 */

void free_list(list_t *head)
{
	list_t *t;

	while (head != NULL)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
}
