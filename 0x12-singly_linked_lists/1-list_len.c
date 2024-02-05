#include "lists.h"
#include <stdio.h>

/**
  * list_len - start
  * @h: check
  * Return: no. of elements
*/

size_t list_len(const list_t *h)
{
	int count;

	for (count = 0; h != NULL ; count++)
	{
		h = h->next;
	}
	return (count);
}
