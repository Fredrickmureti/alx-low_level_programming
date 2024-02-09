#include <stdlib.h>
#include "3-calc.h"

/**
  * get_op_func - start
  * @s: argument
  * Return: ptr
*/

int (*get_op_func(char *s))(int, int)
{
	/** array **/
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int a = 0;

	while (ops[a].op != NULL && *(ops[a].op) != *s)
	{
		a++;
	}
	return (ops[a].f);
}
