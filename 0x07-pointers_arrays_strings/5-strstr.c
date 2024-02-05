#include "main.h"

/**
  *_strstr - start
  * @haystack: string to check
  * @needle: substring
  * Return: ptr else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*a == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
