#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - start
  * @separator: print string in btwn
  * @n: args
  * @...: var params
  * Return: null
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int a;
	char *str;

	va_start(strings, n);
	for (a = 0; a < n; a++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		printf("%s", str);
		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
