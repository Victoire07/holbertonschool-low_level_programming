#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * afficher_dossiers_du_path - Affiche chque dssier contenu ds la variable PATH
 */

 void afficher_chemins_path(void)
 {
	 char *chemin = _getenv("PATH");
	 char *copie_chemin;
	 char *dossier;
 
	 if (chemin == NULL)
	 {
		 printf("La variable PATH n'est pas définie.\n");
		 return;
	 }
 
	 copie_chemin = strdup(chemin);
	 if (copie_chemin == NULL)
	 {
		 perror("Erreur de duplication");
		 return;
	 }
 
	 dossier = strtok(copie_chemin, ":");
	 while (dossier != NULL)
	 {
		 printf("%s\n", dossier);
		 dossier = strtok(NULL, ":");
	 }
 
	 free(copie_chemin);
 }
 