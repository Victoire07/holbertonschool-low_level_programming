#include "main.h"

/**
 * main - affiche ttes les variables d'environnement via environ
 * Return: 0
 */

 /** extern char **environ; : utile pour la fonction, défini dans mon main.h */

 int main (void)
 {
	int i = 0;

	while (environ[i] != NULL)
	{
		printf ("%s\n", environ[i]);
		i++;
	}
	return (0);
 }
