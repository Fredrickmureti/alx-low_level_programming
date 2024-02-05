#include "main.h"

/**
  *_strchr - start
  * @s: ptr char
  * @c: char
  * Return: pointer else NULL
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
	}
	return (0);
}
