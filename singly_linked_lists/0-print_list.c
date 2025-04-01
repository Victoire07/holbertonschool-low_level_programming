#include "lists.h"
/**
 * print_list - fonction qui imprime tous les elements d'une liste list_t
 * @h: liste
 * Return: le nombre de noeuds
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if(h->str == NULL)
		printf("[0] (nil)\n");

		else
		printf("[%u] %s\n", h->len, h->str);
	}
	return (count);
}
