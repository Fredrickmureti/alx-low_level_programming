#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}


int main(void) {
    char str[] = "Hello, world!";
    char target_char = 'o';
    char *result = _strchr(str, target_char);

    if (result != NULL) {
        printf("Character '%c' found at index: %ld\n", target_char, result - str);
    } else {
        printf("Character '%c' not found in the string.\n", target_char);
    }

    return 0;
}


