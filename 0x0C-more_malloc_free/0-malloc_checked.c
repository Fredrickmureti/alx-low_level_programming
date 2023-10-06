#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 * If malloc fails, the program terminates with status 98.
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

    if (ptr == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(98);
    }

    printf("%p\n", (void *)ptr); /* Print the memory address before returning */

    return (ptr);
}

