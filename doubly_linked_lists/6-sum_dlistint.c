#include "lists.h"

/**
 * sum_dlistint - renvoie la sum de ttes les données (n)d'1 lst chaînée
 * @head: Liste
 * Return: La somme de toutes les données (n) d'1 liste chainee
 */

int sum_dlistint(dlistint_t *head)
{
	int somme = 0;
	dlistint_t *current = head;

	if (head == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		somme += current->n;
		current = current->next;
	}
	return (somme);
}
