#include "main.h"

/**
 * main - Fonction principale qui va tester ligne_texte
 * Return: 0 always
 */

 /** char **ligne_texte(char *ligne); : utile pour la fonction, défini dans mon main.h */

int main(void)
{
	char ligne[] = "Je suis étudiante à Holberton School";
	char **resultat = ligne_texte(ligne);
	int i = 0;
	int j = 0;

	while (resultat[i] != NULL)
	{
		printf("mot %d : %s\n", i, resultat[i]);
		i++;
	}

	while (resultat[j] != NULL)
	{
		free(resultat[j]);
		j++;
	}
	free(resultat);

	return (0);
}
