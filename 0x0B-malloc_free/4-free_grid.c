#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *free_grid - start
  * @grid: 2nd
  * @height: hght
  * Return: null
*/

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
