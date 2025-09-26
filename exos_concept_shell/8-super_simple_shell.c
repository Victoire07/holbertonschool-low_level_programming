#include "main.h"

/** extern char **environ;
char **ligne_texte(char *ligne); : utile pour la fonction, défini dans mon main.h */


/**
 * main - Fonction principale qui crée le super simple shell
 * 			1. Affiche un prompt et lit 1 ligne de cde
 * 			2. Découpe la ligne en tokens et exécute la cde
 * 			3. Boucle jusqu'à EOF
 * Return: Always 0
 */


int main (void)
{
	char *stock_ligne = NULL;
	size_t taille = 0;
	ssize_t nombre_lu;
	char **arguments;
	int i;
	
	while (1)
	{
		printf("$ ");

		nombre_lu = getline(&stock_ligne, &taille, stdin);
		
		if (nombre_lu == -1)
		exit(0);
		
		arguments = ligne_texte(stock_ligne);
		for (i = 0; arguments[i]; i++)
			printf("%s\n", arguments[i]);
		if (execve(arguments[0], arguments, environ) == -1)
		{
			perror("execve");
			exit (1);
		}
	}
	return (0);
} 
