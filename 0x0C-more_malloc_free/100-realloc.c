#include "main.h"
#include <stdlib.h>

/**
  * _realloc - start
  * @ptr: pointer
  * @old_size: bytes
  * @new_size: new mem block
  * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a, *b;
	unsigned int c;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	a = malloc(new_size);
	if (!a)
	{
		return (NULL);
	}
	b = a;
	if (new_size < old_size)
	{
		for (c = 0; c < new_size; c++)
		{
			a[c] = b[c];
		}
	}
	if (new_size > old_size)
	{
		for (c = 0; c < old_size; c++)
		{
			a[c] = b[c];
		}
	}
	free(ptr);
	return (a);
}
