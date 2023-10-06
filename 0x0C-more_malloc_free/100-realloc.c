#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the previously allocated memory block.
 * @old_size: Size of the old memory block.
 * @new_size: New size of the memory block.
 *
 * Return: A pointer to the newly reallocated memory block, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;
    unsigned int min_size;
    unsigned int i; /* Declare 'i' before the loop */

    if (new_size == old_size)
        return (ptr);

    if (ptr == NULL)
        return (malloc(new_size));

    if (new_size == 0)
    {
        free(ptr);
        return (NULL);
    }

    min_size = (old_size < new_size) ? old_size : new_size;

    new_ptr = malloc(new_size);

    if (new_ptr == NULL)
        return (NULL);

    for (i = 0; i < min_size; i++)
        ((char *)new_ptr)[i] = ((char *)ptr)[i];

    free(ptr);

    return (new_ptr);
}

