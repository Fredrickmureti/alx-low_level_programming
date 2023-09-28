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
    int s1_len = strlen(s1);
    int s2_len = strlen(s2);
    int s1_index = 0;
    int s2_index = 0;
    int s1_star = -1;
    int s2_star = -1;

    while (s1_index < s1_len)
    {
        if (s2_index < s2_len && (s2[s2_index] == '*' || s2[s2_index] == s1[s1_index]))
        {
            if (s2[s2_index] == '*')
            {
                s1_star = s1_index;
                s2_star = s2_index;
                s2_index++;
            }
            else
            {
                s1_index++;
                s2_index++;
            }
        }
        else if (s1_star != -1)
        {
            s1_star++;
            s1_index = s1_star;
            s2_index = s2_star + 1;
        }
        else
        {
            return (0);
        }
    }

    while (s2_index < s2_len && s2[s2_index] == '*')
    {
        s2_index++;
    }

    return (s2_index == s2_len);
}

