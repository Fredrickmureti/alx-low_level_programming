#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted change
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;								}
	return (dest);
}

int main(void) {
    char source[] = "Hello, world!";
    char destination[20];

    _memcpy(destination, source, 13);

    printf("Copied string: %s\n", destination);

    return 0;
}
