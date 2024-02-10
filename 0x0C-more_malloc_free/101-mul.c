#include <stdlib.h>
#include "main.h"
#include <stdio.h>

#define ERR_MSG "Error"

/**
  * is_digit - start
  * @s: string to check
  * Return: 1 if digit else 0
 */

int is_digit(char *s)
{
	int a;

	a = 0;
	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
		{
			return (0);
		}
		a++;
	}
	return (1);
}

/**
  * _strlen - start
  * @s: check len
  * Return: len
 */

int _strlen(char *s)
{
	int b;

	b = 0;
	while (s[b] != '\0')
	{
		b++;
	}
	return (b);
}

/**
  * errors - start
  * Return: nothing
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
  * main - start
  * @argc: arguments to pass
  * @argv: arguments array
  * Return: 0
 */

int main(int argc, char *argv[])
{
	char *x, *y;
	int a, b, c, d, beba, mat, matb, *get, aa;

	aa = 0;
	x = argv[1], y = argv[2];
	if (argc != 3 || !is_digit(x) || !is_digit(y))
		errors();
	a = _strlen(x);
	b = _strlen(y);
	c = a + b + 1;
	get = malloc(sizeof(int) * c);
	if (!get)
		return (1);
	for (d = 0; d <= a + b; d++)
	{
		mat = x[a] - '0';
		beba = 0;
		for (b = _strlen(y) - 1; b >= 0; b--)
		{
			matb = y[b] - '0';
			beba += get[a + b + c] + (mat * matb);
			get[a + b + 1] = beba % 10;
			beba /= 10;
		}
		if (beba > 0)
			get[a + b + 1] += beba;
	}
	for (d = 0; d < c - 1; d++)
	{
		if (get[d])
			aa = 1;
		if (aa)
			_putchar(get[d] + '0');
	}
	if (!aa)
		_putchar('0');
	_putchar('\n');
	free(get);
	return (0);
}
