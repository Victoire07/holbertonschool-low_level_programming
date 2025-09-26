#include "main.h"

/**
 * main - Cherche fichiers dans repos listés dans la variable PATH
 * @argc: nombre d'arguments
 * @argv: tableau contenant les arguments
 * Return: 0 always
 */

int main(int argc, char **argv)
{
	char *chemins_path;
	char *copie_chemins_path;
	char *token;
	char commande_complete[1024];
	int indice_fichier;
	char *temp_path;
	struct stat infos_fichier;

	chemins_path = getenv("PATH");

	if (argc < 2)
	{
		printf("Usage: %s filename [filename2 ...]\n", argv[0]);
		exit(1);
	}
	if (chemins_path == NULL)
	{
		printf("%s: variable PATH non définie\n", argv[0]);
		exit(1);
	}

	copie_chemins_path = strdup(chemins_path);
	if (copie_chemins_path == NULL)
	{
		perror("strdup");
		exit(1);
	}
	for (indice_fichier = 1; indice_fichier < argc; indice_fichier++)
	{
		int trouve = 0;

		temp_path = strdup(copie_chemins_path);
		if (temp_path == NULL)
		{
			perror("strdup");
			exit(1);
		}
		token = strtok(temp_path, ":");

		while (token != NULL)
		{
			snprintf(commande_complete, sizeof(commande_complete), "%s/%s", token, argv[indice_fichier]);
			if (stat(commande_complete, &infos_fichier) == 0)
			{
				printf("%s: FOUND\n", commande_complete);
				trouve = 1;
				break;
			}
			token = strtok(NULL, ":");
		}
		if (!trouve)
			printf("%s: NOT FOUND\n", argv[indice_fichier]);

		free(temp_path);
	}

		free(copie_chemins_path);
		return (0);
	
}
