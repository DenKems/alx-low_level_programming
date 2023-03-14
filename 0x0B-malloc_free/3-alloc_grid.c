#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - function returns a pointer to a 2 dimensional array of integers
* @width: number of columns of array
* @height: number of rows of array
* Return: returns pointer to 2D array or NULL
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (sizeof(int **) * (width * height));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}

