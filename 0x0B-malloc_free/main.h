#ifndef MAIN_H
#define MAIN_H

#include <stddef.h> /* for size_t */
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
void free_words(char **words);
#endif /* MAIN_H */

