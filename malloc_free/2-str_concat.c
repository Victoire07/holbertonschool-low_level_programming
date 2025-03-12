#include "main.h"
/**
 * str_concat - Creer une fonction qui alloue et retourne 1copie d'une chaine
 * @s1: 1ere chaine
 * @s2: 2eme chaine
 * Return: Pointeur vers une nouvelle chaîne contenant s1 suivi de s2,
 * NULL si l'allocation échoue.
 * Traite NULL comme une chaîne vide.
 */

char *str_concat(char *s1, char *s2)
{
    char *concat;
    int i, j, len1 = 0, len2 = 0;

	if (s1 != NULL)
	{
		for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	}

	if (s2 != NULL)
	{
		for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	}
	

	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	concat[i] = s1[i];

	for (j = 0; j < len2; j++)
	concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}

