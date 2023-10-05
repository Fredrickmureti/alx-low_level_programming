#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: On success, returns a pointer to a newly allocated string
 *         containing the concatenated result of s1 and s2.
 *         Returns NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
    char *concatenated_str;
    int s1_len = 0, s2_len = 0, i, j;

    /* Handle NULL strings by treating them as empty strings */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculate the lengths of s1 and s2 */
    while (s1[s1_len] != '\0')
        s1_len++;
    while (s2[s2_len] != '\0')
        s2_len++;

    /* Allocate memory for the concatenated string, including space for the null terminator */
    concatenated_str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));

    /* Check if memory allocation was successful */
    if (concatenated_str == NULL)
        return (NULL);

    /* Copy s1 into the concatenated string */
    for (i = 0; i < s1_len; i++)
        concatenated_str[i] = s1[i];

    /* Copy s2 into the concatenated string */
    for (j = 0; j < s2_len; j++)
        concatenated_str[i + j] = s2[j];

    /* Null-terminate the concatenated string */
    concatenated_str[i + j] = '\0';

    return (concatenated_str);
}
