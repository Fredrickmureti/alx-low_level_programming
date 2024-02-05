#include "main.h"
/**
 * _isupper - uppercase letters
 * @c: char to check
 * Return: 0 or 1
 */

int _isupper(int c)
{
		if (c >= 'A' && c <= 'Z')
					return (1);
			else
					return (0);



}

#include <stdio.h> // You may need to include stdio.h for printf

int main(void) {
    int result = _isupper('A');
    printf("%d\n", result);
    return 0; 
}
