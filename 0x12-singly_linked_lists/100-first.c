#include <stdio.h>

/* Attributes in GCC */
void myFirst(void) __attribute__((constructor));

/**
  * myFirst - runs before the main
  * Return: nothing
*/

void myFirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
