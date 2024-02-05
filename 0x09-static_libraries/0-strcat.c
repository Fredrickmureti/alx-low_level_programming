#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void	
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
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

    _strcat(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
