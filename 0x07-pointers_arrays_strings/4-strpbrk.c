#include "main.h"

/**
  * _strpbrk - start
  * @s: string
  * @accept: string to be checked
  * Return: ptr else NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
