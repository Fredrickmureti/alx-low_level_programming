#include "main.h"

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
		return (1); /* Base case: An empty string is a palindrome */
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
	int length = 0;
	int end = 0;

	while (s[length] != '\0')
	{
		length++; /* Calculate the length of the string */
	}

	end = length - 1; /* Set the end index to the last non-null character in the string */

	return (is_palindrome_helper(s, 0, end));
}
