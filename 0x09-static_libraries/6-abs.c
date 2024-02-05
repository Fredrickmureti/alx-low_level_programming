#include "main.h"


/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}




int main(void) {
    int num = -10;

    int result = _abs(num);

    printf("The absolute value of %d is %d\n", num, result);

    return 0;
}
