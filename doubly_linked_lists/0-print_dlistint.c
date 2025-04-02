#include "lists.h"

/**
 * print_dlistint - Fonction qui imprime tous les elmnts d'1 liste dlistint_t
 * @h: Liste
 * Return: le nombre de noeuds
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
