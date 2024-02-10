#include "main.h"
#include <stdlib.h>

/**
  * _memset - start
  * @s: ptr char
  * @a: char
  * @n: bytes of array
  * Return: ptr
 */

char *_memset(char *s, char a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		s[c] = a;
	}
	return (s);
}

/**
  * _calloc - start
  * @nmemb: bytes
  * @size: size of array
  * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
	_memset(p, 0, nmemb * size);
	return (p);
}
