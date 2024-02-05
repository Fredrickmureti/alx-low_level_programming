#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  * add_node - start
  * @head: start
  * @str: string
  * Return: new address || NULL
*/

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len;
	list_t *newnode;

	len = 0;
	while (str[len])
	{
		len++;
		continue;
	}
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = (*head);
	(*head) = newnode;
	if (newnode->str == NULL)
	{
		free(newnode);
	}
	return (*head);
}
