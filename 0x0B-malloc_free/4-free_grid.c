#include "holberton.h"
#include <stdlib.h>

/**
 *free_grid - allocated memory.
 *@grid: grid.
 *@height: grid.
 */
void free_grid(int **grid, int height)
{

int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);

}
