#include "function_pointers.h"

/**
 * array_iterator - fonction qui execute une fonction donnee en parametre
 * sur chaque élément d'un tableau
 * @array: Le tableau a traiter
 * @size: Le nombre d'elements dans le tableau
 * @action: La fonction a appliquer a chaque element
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t i;

	if (array == NULL || action == NULL)
	return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
