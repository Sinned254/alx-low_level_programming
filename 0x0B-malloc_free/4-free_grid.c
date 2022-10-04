#include "main.h"

/**
 * free_grid - frees up a two dimentional frid
 *
 * @grid: grid pointer
 * @height: grid height
 *
 * Retun: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

