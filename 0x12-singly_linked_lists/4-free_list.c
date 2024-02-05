#include <stdlib.h>
#include "lists.h"

/**
  * free_list - start
  * @head: 1st node
  * Return: nothing
*/

void free_list(list_t *head)
{
	list_t *current, *next;

	for (current = head; current != NULL; current = next)
	{
		next = current->next;
		free(current->str);
		free(current);
		head = next;
	}
}
