#include <stdlib.h>

/**
 * free_grid - frees 2 dimensional grid
 * @grid: grid double pointer
 * @height: height grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
