#include "main.h"

/**
 * print_program_name - Prints the name of the program
 * @name: The name of the program (usually argv[0])
 */
void print_program_name(char *name)
{
    while (*name)
    {
        _putchar(*name);
        name++;
    }
    _putchar('\n');
}

