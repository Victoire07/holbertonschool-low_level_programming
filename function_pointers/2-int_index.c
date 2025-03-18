#include "function_pointers.h"
/**
 * int_index - Fonction qui recherche un entier
 * @array: le tableau dans lequel la recherche doit s'effectuer
 * @size: le nombre d'elements dans le tableau array
 * @cmp: pointeur vers la fonction a utiliser pour comparer les valeurs
 * Return: renvoie l'indice du premier element pour lequel 
 * la fonction cmp ne renvoie pas 0
 * Si aucun élément ne correspond, renvoie -1
 * Si la taille <= 0, -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0; 

	if (array == NULL || cmp == NULL || size <= 0)
	return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
    	return (i);

	}

	return (-1);
}
