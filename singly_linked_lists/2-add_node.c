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
 * add_node - fonction qui ajoute un nouveau noeud au debut d'une liste list_t
 * @head: pointeur vers la tete de liste
 * @str: La chaine a dupliquer et a stocker dans le node
 * Return: l'adresse du nouvel élément donc du nv noeud ou NULL si echec
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
