#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2-dimensional array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: On success, returns a pointer to the 2D array of integers.
 *         Each element is initialized to 0. Returns NULL on failure
 *         or if width or height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    /* Check for invalid width or height */
    if (width <= 0 || height <= 0)
        return (NULL);

    /* Allocate memory for the rows (height) */
    grid = (int **)malloc(sizeof(int *) * height);

    if (grid == NULL)
        return (NULL);

    /* Allocate memory for the columns (width) and initialize to 0 */
    for (i = 0; i < height; i++)
    {
        grid[i] = (int *)malloc(sizeof(int) * width);
        if (grid[i] == NULL)
        {
            /* Free previously allocated memory if allocation fails */
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return (NULL);
        }
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return (grid);
}

