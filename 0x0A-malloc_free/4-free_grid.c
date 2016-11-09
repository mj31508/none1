#include <stdlib.h>

/**
 * free_grid - clears a two-dimensional array and makes its memory accessible
 * @grid: grid to be cleared
 * @height: grid height
 * Return: none by default
 */


void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
