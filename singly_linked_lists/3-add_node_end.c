#include "lists.h"

/**
 * _strlen - Retourne la longueur d'une chaine de caractere
 * @s: chaine de caractere
 * Return: La longueur de la chaine de cara
 */
int _strlen(const char *s)

{
	int compteur = 0;

	while (s[compteur] != '\0')
	{
	compteur++;
	}
	return (compteur);
}

/**
 * add_node_end - fonction qui ajoute un nouveau noeud a la fin d'une liste list_t
 * @head: Pointeur vers la tête de la liste
 * @str: Chaine à dupliquer et stocker dans le nouveau noeud
 * Return: l'adresse du nouvel élément, ou NULL en cas d'échec
 */

 list_t *add_node_end(list_t **head, const char *str)
 {
	list_t *new_node;
	list_t *last;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}

	else
	{
		last = *head;
		while (last->next != NULL)
		last = last->next;

		last->next = new_node;
	}
	return (new_node);

 }
