#include "main.h"
#include <stdio.h>

/**
 * print_fibonacci - Prints the first 50 Fibonacci numbers
 */
void print_fibonacci(void)
{
    unsigned long int a = 1, b = 2, temp;
    int i;

    printf("%lu, %lu, ", a, b);

    for (i = 2; i < 50; i++)
    {
        temp = a + b;
        a = b;
        b = temp;

        printf("%lu", temp);
        if (i != 49)
            printf(", ");
    }
    printf("\n");
}

