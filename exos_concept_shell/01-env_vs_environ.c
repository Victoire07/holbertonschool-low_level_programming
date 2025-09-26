#include "main.h"
/**
 * main - Imprime les adresses de env & environ pour les comparer
 * Return: 0
 */

/** extern char **environ; : utile pour la fonction, défini dans mon main.h */

 int main(int ac, char **av, char **env)

 {
	(void)ac;
	(void)av;


	printf("Adresse de env : %p\n", (void*)env);

	printf("Adresse de environ : %p\n", (void *)environ);

	return (0);
 }
