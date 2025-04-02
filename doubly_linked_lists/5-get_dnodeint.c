#include "lists.h"

/**
 * get_dnodeint_at_index - fct ki rnvoie le'nth'nœud d1 lst chainee dlistint_t
 * @head: Liste
 * @index: L'index du nœud, à partir de 0
 * Return: Le 'nth' nœud et si le nœud n'existe pas, renvoie NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_count = 0;

	while (head != NULL)
	{
		if (node_count == index)
		return (head);
		node_count++;
		head = head->next;
	}
	return (NULL);
}
