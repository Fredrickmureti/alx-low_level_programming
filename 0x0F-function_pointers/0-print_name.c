#include "function_pointers.h"
#include <stdio.h>

/**
  * print_name - start
  * @name: string to print
  * @f: ptr
  * Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
