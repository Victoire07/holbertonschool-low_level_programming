#include "main.h"

/**
* reverse_array - Inverse le contenu d'un tableau entier
* @a:  Tableau a inverser
* @n: Taille du tableau
*/

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		}
}
