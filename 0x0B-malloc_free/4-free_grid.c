#include "main.h"
#include <stdlib.h>

/**
 * free-grid - frees a 2D grid prevsly made by alloc_grid
 * @grid: the grid to free
 * @height: the height of the grid
 */

void free_grid(int **grid, int height)
{
	 int i;
 
	 for (i = 0; i < height; i++)
		 free(grid[i]);
	 free(grid);
}
