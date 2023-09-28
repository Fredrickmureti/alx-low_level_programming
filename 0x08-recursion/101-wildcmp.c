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
	/* If both strings are empty, they are considered identical */
	if (*s1 == '\0' && (*s2 == '\0' || (*s2 == '*' && *(s2 + 1) == '\0')))
	{
		return (1);
	}

	/* If the current characters match or s2 has a wildcard '*', continue comparing */
	if (*s1 == *s2 || *s2 == '*')
	{
		/* Check if s2's '*' can replace any string, including an empty string */
		if (*s2 == '*')
		{
			if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			{
				return (1);
			}
		}

		/* If not, continue comparing characters */
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/* If the current characters don't match, and there's no wildcard '*', return 0 */
	return (0);
}

