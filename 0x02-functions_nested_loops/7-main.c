#include "main.h"
#include <stdio.h>

int main(void)
{
    int r;

    r = print_last_digit(98);
    printf("Last digit: %d\n", r);

    r = print_last_digit(-402);
    printf("Last digit: %d\n", r);

    r = print_last_digit(0);
    printf("Last digit: %d\n", r);

    return (0);
}

