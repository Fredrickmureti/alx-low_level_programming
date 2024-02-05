#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
  * print_list - start
  * @h: list
  * Return: elements
*/

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
			/** break; */
		} else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
