#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node_end - start
  * @head: dbl ptr
  * @str: array
  * Return: address of new node else NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len;
	list_t *newend, *temp;

	len = 0;
	while (str[len])
	{
		len++;
	}
	newend = malloc(sizeof(list_t));
	if (newend == NULL)
	{
		return (NULL);
	}
	newend->str = strdup(str);
	newend->len = len;
	newend->next = NULL;
	if (*head == NULL)
	{
		*head = newend;
		return (newend);
	}
	if (newend->str == NULL)
	{
		free(newend);
	}
	for (temp = *head; temp->next != NULL; temp = temp->next)
	{
		/*traverse to find last node*/
	}
	temp->next = newend;
	return (newend);
}
