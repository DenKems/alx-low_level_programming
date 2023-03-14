#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - function frees a 2 dimensional grid
* @grid: 2D array to be deleted
* @height: numbers of rows on the grid
* Return: return nothing
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
