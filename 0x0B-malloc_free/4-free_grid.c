#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid.
 * @grid: The pointer to the 2D array to be freed.
 * @height: The height of the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
    int i;

    if (grid == NULL || height <= 0)
        return;

    /* Free memory for each row (sub-arrays) */
    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }

    /* Free memory for the array of row pointers */
    free(grid);
}

