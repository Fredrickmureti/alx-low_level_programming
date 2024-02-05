#include "main.h"
		
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}



int main(void) {
    char test_char = '5';

    if (_isdigit(test_char)) {
        printf("%c is a digit.\n", test_char);
    } else {
        printf("%c is not a digit.\n", test_char);
    }

    return 0;
}
