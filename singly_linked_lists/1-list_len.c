#include "lists.h"
/**
 * list_len - fonction qui renvoie le nombre d'elements d'une liste list_t
 * @h: Liste
 * Return: nombre d'elements dans une liste list_t
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
