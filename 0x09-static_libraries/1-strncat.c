#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}


int main(void) {
    char str1[50] = "Hello ";
    char str2[] = "world!";

    _strncat(str1, str2, 3);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
