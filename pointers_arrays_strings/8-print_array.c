#include "main.h"
#include <stdio.h>
/**
 * print_array - fonction qui imprime n elements d'un tableau d'entiers + \n
 * @a: Pointeur vers le tableau d'entiers à afficher.
 * @n: Nombre d'éléments dans le tableau.
 *
 * La fonction parcourt le tableau et imprime chaque élément suivi d'une
 * virgule et d'un espace, sauf pour le dernier élément. Après l'affichage,
 * un saut de ligne est imprimé.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
		printf(", ");
		}
	}
	printf("\n");
}
