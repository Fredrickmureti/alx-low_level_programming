#include "main.h"

/**
 * wildcmp - Compares two strings considering wildcard character '*'.
 * @s1: The first string to compare.
 * @s2: The second string to compare, which can contain '*'.
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
    if (*s1 == '\0')
    {
        if (*s2 == '\0' || (*s2 == '*' && wildcmp(s1, s2 + 1)))
            return (1);
        return (0);
    }

    if (*s2 == '*')
    {
        if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
            return (1);
    }

    if (*s1 == *s2)
    {
        return (wildcmp(s1 + 1, s2 + 1));
    }

    return (0);
}

