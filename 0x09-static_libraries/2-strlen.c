#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}




int main(void) {
    char str[] = "Hello, world!";
    int length = _strlen(str);

    printf("Length of the string: %d\n", length);

    return 0;
}
