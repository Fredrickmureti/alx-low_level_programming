#include "main.h"
#include <stdio.h>

/**
  *print_diagsums - start
  * @a: one int
  * @size: another int
  * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int b, c, d;

	b = 0;
	c = b;
	for (d = 0; b < size; b++)
	{
		b = b + a[d * (size + d)];
	}
	for (d = size - 1; d >= 0; d--)
	{
		c += a[d * size + (size - d - 1)];
	}
	printf("%d, %d\n", b, c);
}
