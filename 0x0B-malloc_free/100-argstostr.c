#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The argument count.
 * @av: The array of argument strings.
 *
 * Return: On success, returns a pointer to a new string containing
 *         all the concatenated arguments, each followed by a newline.
 *         Returns NULL if ac is 0, av is NULL, or if memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
    char *str;
    int i, j, k, len = 0;
    int total_len = 0;

    if (ac == 0 || av == NULL)
        return (NULL);

    /* Calculate the total length of the concatenated string */
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            len++;
        total_len += len + 1; /* Add 1 for the newline character */
        len = 0; /* Reset len for the next argument */
    }

    /* Allocate memory for the concatenated string */
    str = (char *)malloc(sizeof(char) * total_len + 1);

    if (str == NULL)
        return (NULL);

    /* Copy each argument followed by a newline into the new string */
    k = 0;
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            str[k++] = av[i][j];
        str[k++] = '\n'; /* Add a newline character after each argument */
    }
    str[k] = '\0'; /* Null-terminate the concatenated string */

    return (str);
}

