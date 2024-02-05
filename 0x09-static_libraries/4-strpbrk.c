#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;
	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}



int main(void) {
    char str[] = "hello, world!";
    char accept[] = "aeiou";

    char *result = _strpbrk(str, accept);

    if (result != NULL) {
        printf("The first character in '%s' that matches any character in '%s' is '%c'.\n", str, accept, *result);
    } else {
        printf("No character in '%s' matches any character in '%s'.\n", str, accept);
    }

    return 0;
}
