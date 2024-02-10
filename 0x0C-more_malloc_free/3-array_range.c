#include "main.h"
#include <stdlib.h>

/**
  * array_range - start
  * @min: minimum
  * @max: maximum
  * Return: array else null
 */
int *array_range(int min, int max)
{
	int a, size, *p;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; min <= max; a++)
	{
		p[a] = min++;
	}
	return (p);
}
