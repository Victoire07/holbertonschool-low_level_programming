#include "main.h"

/**
 * array_range -  fonction qui cree un tableau d'entiers
 * @min: La valeur minimale
 * @max: La valeur maximale
 * Return: le pointeur sur le tableau nouvellement cree
 * Si min > max, renvoie NULL
 * Si malloc echoue, retourner NULL
 */

int *array_range(int min, int max)
{
	int i;
	int size;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min + 1);

	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
