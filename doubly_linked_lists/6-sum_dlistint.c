#include "lists.h"

/**
 * sum_dlistint - renvoie la sum de ttes les données (n)d'1 lst chaînée
 * @head: Liste
 * Return: 
 */

 int sum_dlistint(dlistint_t *head)

 {
	int somme = 0;
	if (head == NULL)
	{
		return (0);
	}
	dlistint_t *current = head;

	while (current != NULL)
	{
		somme += current->n;
		current = current->next;
	}
	return (somme);
 }
