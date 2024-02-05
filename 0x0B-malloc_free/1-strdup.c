#include "main.h"
#include <stdlib.h>

/**
  * *_strdup - start
  * @str: string as a parameter
  * Return: Null if str = NULL elsei
 */

char *_strdup(char *str)
{
	int a, b;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	c = malloc(sizeof(char) * (a + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	for (b = 0; str[b]; b++)
	{
		c[b] = str[b];
	}
	return (c);
}
