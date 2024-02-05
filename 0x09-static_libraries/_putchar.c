#include <unistd.h> 
 
/** 
 * _putchar - writes the character c to stdout 
 * @c: The character to print
 * Return: On success 1. 
 * On error, -1 is returned, and errno is set appropriately. 
 */

int _putchar(char c) 
{ 
	 return (write(1, &c, 1)); 
}


int main(void) {
    char c = 'A'; // or any other character you want to test

    // Call _putchar to print the character
    _putchar(c);

    return 0;
}
