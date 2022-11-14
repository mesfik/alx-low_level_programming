#include "main.h"
/**
 * free_grid -  function that frees a 2 dimensional grid
 *
 * @grid: a grid to be free
 * @height: height of the array
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (height == 0 || grid == NULL)
		return;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
