#include "main.h"

/**
  * _memcpy - start
  * @dest: new destination
  * @src: mem area
  * @n: bytes to be copied
  * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	int b = n;

	for (a = 0; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
