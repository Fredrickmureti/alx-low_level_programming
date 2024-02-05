#include "main.h"
		
/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}


int main(void) {
    char test_char = 'A';

    if (_isalpha(test_char)) {
        printf("%c is an alphabetic character.\n", test_char);
    } else {
        printf("%c is not an alphabetic character.\n", test_char);
    }

    return 0;
}
