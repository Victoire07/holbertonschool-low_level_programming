#include "main.h"

/**
 * alloc_grid - Fonction qui renvoie un ptr vers un tableau d'entiers a 2 dims
 * @width: Largeur de la grille
 * @height: Hauteur de la grille
 * Return: Un pointeur vers la grille allouée ou NULL en cas d'echec
 */

int **alloc_grid(int width, int height)
{
	int i;
	int y;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (!array)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (!array[i])
		{
			for (y = 0; y < i; y++)
			{
				free(array[y]);
			}
			free(array);
			return (NULL);
		}

		for (y = 0; y < width; y++)
		{
			array[i][y] = 0;
		}
	}
	return (array);
}
