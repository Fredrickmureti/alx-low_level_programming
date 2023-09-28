#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
    if (*s == '\0')
    {
        return; /* Base case: when the string ends, return without printing */
    }

    _print_rev_recursion(s + 1); /* Recursively call _print_rev_recursion on the next character */
    _putchar(*s); /* Print the current character */
}
