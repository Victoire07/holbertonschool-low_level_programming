#include "main.h"

/**
 * ligne_texte - Fonction qui découpe une ligne en mots avec espace
 * @ligne: chaîne de caractere à découper en mot
 * Return: Le tableau de chaine de caracteres ou NULL si echec
 */

char **ligne_texte(char *ligne)
{
	char *token_mot;
	char **token_mots;
	int i = 0;

	token_mots = malloc(65 * sizeof(char *));
	if (token_mots == NULL)
		return (NULL);

	token_mot = strtok(ligne, " \n");

	while (token_mot != NULL)
	{
		token_mots[i] = strdup(token_mot);
		i++;
		token_mot = strtok(NULL, " \n");
	}
	token_mots[i] = NULL;

	return (token_mots);
}
