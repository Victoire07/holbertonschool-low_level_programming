#include "lists.h"

/**
 * dlistint_len - fctn qui renvoie le nbr d'elements d'1 lst dlistint_t chainee
 * @h: Liste
 * Return: Nombre de noeuds !
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
