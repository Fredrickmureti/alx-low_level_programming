#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;
		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}


int main(void) {
    char haystack[] = "hello, world!";
    char needle[] = "world";

    char *result = _strstr(haystack, needle);

    if (result != NULL) {
        printf("'%s' found in '%s' at position: %ld\n", needle, haystack, result - haystack);
    } else {
        printf("'%s' not found in '%s'.\n", needle, haystack);
    }

    return 0;
}
