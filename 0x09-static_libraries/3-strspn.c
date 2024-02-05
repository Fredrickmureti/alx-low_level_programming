#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;
	
	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}



#include "main.h"

int main(void) {
    char str[] = "hello, world!";
    char accept[] = "abcdefghijklmnopqrstuvwxyz";

    unsigned int length = _strspn(str, accept);

    printf("Length of initial segment: %u\n", length);

    return 0;
}
