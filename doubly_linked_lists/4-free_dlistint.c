#include "lists.h"

/**
 * free_dlistint - fonction qui libere une liste dlistint_t
 * @head: Liste
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;

	}
}
