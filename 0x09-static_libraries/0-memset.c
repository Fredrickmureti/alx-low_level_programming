#include "main.h"
#include <stdio.h>
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

int main(void) {
    char str[10] = "Hello";
    char *result = _memset(str, 'a', 3);
    printf("%s\n", result); // Should print "aaallo" if _memset works correctly
    return 0;
}
