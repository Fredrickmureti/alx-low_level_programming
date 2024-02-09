#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_numbers - start
  * @separator: string btwn ints
  * @n: args
  * @...: var ints to print
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list nums;

	va_start(nums, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(nums, int));
		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(nums);
}
