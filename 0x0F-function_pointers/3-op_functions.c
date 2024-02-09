#include "3-calc.h"

int op_add(int i, int j);
int op_sub(int i, int j);
int op_mul(int i, int j);
int op_div(int i, int j);
int op_mod(int i, int j);

/**
  * op_add - start
  * @i: first int
  * @j: sec int
  * Return: sum
*/

int op_add(int i, int j)
{
	return (i + j);
}

/**
  * op_sub - start
  * @i: first int
  * @j: sec int
  * Return: sub of a and b
*/

int op_sub(int i, int j)
{
	return (i - j);
}

/**
  * op_mul - start
  * @i: first int
  * @j: sec int
  * Return: multiplication
*/

int op_mul(int i, int j)
{
	return (i * j);
}

/**
  * op_div - start
  * @i: first int
  * @j: sec int
  * Return: division of ints
*/
int op_div(int i, int j)
{
	return (i / j);
}

/**
  * op_mod - start
  * @i: int one
  * @j: sec int
  * Return: modulous
*/

int op_mod(int i, int j)
{
	return (i % j);
}
