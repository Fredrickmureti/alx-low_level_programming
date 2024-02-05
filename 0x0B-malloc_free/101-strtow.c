#include "main.h"
#include <stdlib.h>

/**
  * cwords - start
  * @s: string
  * Return: int words
*/

int cwords(char *s)
{
	int a, b, c;

	a = 0;
	c = 0;
	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
		{
			a = 0;
		}
		if (a == 0)
		{
			a = 1;
			c++;
		}
	}
	return (c);
}

/**
  * strtow - splitter
  * @str: string
  * Return: ptr
*/

char **strtow(char *str)
{
	int begin, mwisho, d, e, f, g, maneno;
	char **x, *y;

	e = 0;
	f = 0;
	g = 0;
	while (*(str + f))
	{
		f++;
	}
	maneno = cwords(str);
	if (maneno == 0)
		return (NULL);
	x = (char **) malloc(sizeof(char *) * (maneno + 1));
	if (x == NULL)
		return (NULL);
	for (d = 0; d <= f; d++)
	{
		if (str[d] == ' ' || str[d] == '\0')
		{
			if (g)
			{
				mwisho = d;
				y = (char *) malloc(sizeof(char) * (g + 1));
				if (y == NULL)
					return (NULL);
				while (begin < mwisho)
					*y++ = str[begin++];
				*y = '\0';
				x[e] = y - g;
				e++;
				g = 0;
			}
		} else if (g++ == 0)
			begin = d;
	}
	x[e] = NULL;
	return (x);
}
