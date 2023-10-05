#include <stdio.h>

int main(int argc, char *argv[])
{
    (void)argv;  /* Unused parameter, so we silence the warning */
    printf("%d\n", argc - 1); /* Subtract 1 to exclude the program name itself */
    return 0;
}

