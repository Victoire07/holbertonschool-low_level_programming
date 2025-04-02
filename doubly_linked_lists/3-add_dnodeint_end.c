#include "lists.h"

/**
 * add_dnodeint_end - fctn qui ajte 1 nv nœud a la fin d'1 lst de dlistint_t
 * @head: Liste
 * @n: L'element a ajouter
 * Return:  l'adresse du nouvel element, ou NULL en cas d'echec
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
	{
		last->next = new_node;
		new_node->prev = last;
	}

	return (new_node);
}
