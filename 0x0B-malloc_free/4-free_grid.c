#include "main.h"

/**
*free_grid - t frees a 2 dimensional grid previously
*created by your alloc_grid function
*@grid: of tab
*@height: of tab
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
