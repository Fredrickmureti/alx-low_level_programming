#include "function_pointers.h"
#include <stdio.h>

/**
  * int_index - start
  * @array: ptr array
  * @size: number of elements in array
  * @cmp: ptr
  * Return: 0 success
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || cmp == NULL)
	{
		if (array == NULL)
		{
			return (-1);
		}
	}
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
		{
			return (a);
		}
	}
	return (-1);
}
