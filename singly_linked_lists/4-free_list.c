#include "lists.h"

/**
 * free_list - ecrire une fonction qui libere une liste list_t
 * @head: liste
 */

void free_list(list_t *head)
{
	list_t *temporaire;

	while (head != NULL)
	{
		temporaire = head->next;
		free(head->str);
		free(head);
		head = temporaire;
	}

}
