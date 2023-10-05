#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: On success, returns a pointer to the duplicated string.
 *         Returns NULL if str is NULL or if memory allocation fails.
 */
char *_strdup(char *str)
{
    char *dup_str;
    int length = 0, i;

    if (str == NULL)
        return (NULL);

    /* Calculate the length of the input string */
    while (str[length] != '\0')
        length++;

    /* Allocate memory for the duplicate string */
    dup_str = (char *)malloc(sizeof(char) * (length + 1));

    if (dup_str == NULL)
        return (NULL);

    /* Copy the characters from the input string to the duplicate */
    for (i = 0; i <= length; i++)
        dup_str[i] = str[i];

    return (dup_str);
}

