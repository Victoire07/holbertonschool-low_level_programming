#include "main.h"
/**
 * free_grid - Libere la memoire allouee pour une grille 2D (bidemensionnelle)
 * @grid: tableau 2d a liberer
 * @height: hauteur de la grille
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
