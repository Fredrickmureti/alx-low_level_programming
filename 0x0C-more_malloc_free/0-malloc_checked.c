#include "main.h"
#include <stdio.h>

/**
  *malloc_checked - start
  * @b: pointer
  * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr != NULL)
	{
		return (ptr);
	}
	exit(98);
}
