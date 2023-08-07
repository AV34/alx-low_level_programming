#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - func that frees 2d []
 * @grid: 2d grid data
 * @height: height dimension of grid data
 * Description: frees memory of grid data
 * Return: noth
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
