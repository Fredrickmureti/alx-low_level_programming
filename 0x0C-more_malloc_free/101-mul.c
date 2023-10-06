#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

int is_digit(char c)
{
    return (c >= '0' && c <= '9');
}

int multiply(char *num1, char *num2)
{
    int len1 = 0, len2 = 0, i, j, carry, sum;
    int *result;

    while (num1[len1] != '\0')
        len1++;

    while (num2[len2] != '\0')
        len2++;

    result = malloc(sizeof(int) * (len1 + len2));
    if (result == NULL)
        return (1);

    for (i = 0; i < (len1 + len2); i++)
        result[i] = 0;

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            sum = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
            carry = sum / 10;
            result[i + j + 1] = sum % 10;
        }
        result[i + j + 1] += carry;
    }

    for (i = 0; i < (len1 + len2); i++)
    {
        if (result[i] != 0 || i == (len1 + len2 - 1))
        {
            while (i < (len1 + len2))
            {
                _putchar(result[i] + '0');
                i++;
            }
            break;
        }
    }

    free(result);
    return (0);
}

int main(int argc, char *argv[])
{
    int i, j; /* Declare loop variables before the for loops */

    if (argc != 3)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        return (98);
    }

    for (i = 1; i < argc; i++) /* Use the declared loop variables here */
    {
        for (j = 0; argv[i][j]; j++) /* Use the declared loop variables here */
        {
            if (!is_digit(argv[i][j]))
            {
                _putchar('E');
                _putchar('r');
                _putchar('r');
                _putchar('o');
                _putchar('r');
                _putchar('\n');
                return (98);
            }
        }
    }

    if (multiply(argv[1], argv[2]) == 1)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        return (98);
    }

    _putchar('\n');
    return (0);
}

