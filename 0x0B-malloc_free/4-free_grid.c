#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Function to free memory
 * @grid: Grid to be freed
 * @height: Height of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
