#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - start
  * @n: params
  * @... var sum
  * Return: int 0 else sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a, sum;
	va_list ap;

	va_start(ap, n);
	for (a = 0; a < n; a++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
