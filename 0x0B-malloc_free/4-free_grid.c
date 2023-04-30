#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2 dimensional grid previously created by alloc_grid
 *
 * @grid: Pointer to the 2D array to be freed
 * @height: The height of the 2D array
 *
 * Return: void
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
