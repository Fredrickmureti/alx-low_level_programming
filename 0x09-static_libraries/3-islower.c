#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int main(void) {
    char test_char = 't';

    if (_islower(test_char)) {
        printf("%c is a lowercase character.\n", test_char);
    } else {
        printf("%c is not a lowercase character.\n", test_char);
    }

    return 0;
}
