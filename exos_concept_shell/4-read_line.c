#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Lit une ligne entrée par l'utilisateur et l'affiche
 * Return: Toujours 0
 */

int main(void)
{
	char *ligne_lue = NULL;
	size_t taille_buffer = 0;
	ssize_t nb_caracteres_lus;

	while (1)
	{
		printf("$ ");

		nb_caracteres_lus = getline(&ligne_lue, &taille_buffer, stdin);

		if (nb_caracteres_lus == -1)
		{
			free(ligne_lue);
			exit(0);
		}

		printf("%s", ligne_lue);
	}

	return (0);
}
