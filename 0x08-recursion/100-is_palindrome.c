#include "main.h"

/**
 * str_len - Helper function to calculate the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + str_len(s + 1));
}

/**
 * is_palindrome_helper - Helper function to check if a string is a palindrome.
 * @s: The string to check.
 * @start: The start index.
 * @end: The end index.
 *
 * Return: 1 if 's' is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1); /* Base case: An empty string or a string with one character is a palindrome */
	}
	if (s[start] != s[end])
	{
		return (0); /* Check if the characters at 'start' and 'end' are the same */
	}
	return (is_palindrome_helper(s, start + 1, end - 1)); /* Recursively check the remaining characters */
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if 's' is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length;

	length = str_len(s); /* Calculate the length of the string */

	return (is_palindrome_helper(s, 0, length - 1));
}
