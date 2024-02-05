#include "main.h"

/**
  *_memset - start
  * @s: character
  * @b: char
  * @n: int
  * Return: new value for n
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
