#include <stdio.h>

int main(int argc, char **argv __attribute__((unused)))
{
    if (argc > 1)
        printf("%d\n", argc - 1);
    else
        printf("0\n");

    return 0;
}

