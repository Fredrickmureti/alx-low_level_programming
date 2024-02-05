#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - start
  * @width: one
  * @height: sec
  * Return: pointer to a 2d array
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int b;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < height; b++)
	{
		a[b] = malloc(sizeof(int) * width);
		if (a[b] == NULL)
		{
			for (; b >= 0; b--)
			{
				free(a[b]);
			}
			free(a);
			return (NULL);
		}
	}
	return (a);
}
