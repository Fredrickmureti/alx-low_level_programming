#include "main.h"
#include <stdlib.h>

/**
  *str_concat - addition of a string
  * @s1: first part
  * @s2: second part
  * Return: s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	char *add;
	int a, b;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	a = 0;
	b = a;
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	add = malloc(sizeof(char) * (a + b + 1));
	if (add == NULL)
	{
		return (NULL);
	}
	while (s1[a] != '\0')
	{
		add[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		add[a] = s2[b];
		a++, b++;
	}
	add[a] = '\0';
	return (add);
}
