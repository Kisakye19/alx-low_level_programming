#include "main.h"
#include <stdio.h>

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
    int count = 0;
    unsigned long int term1 = 1, term2 = 2, next_term;

    while (count < 98)
    {
        printf("%lu", term1);

        if (count != 97)
            printf(", ");

        next_term = term1 + term2;
        term1 = term2;
        term2 = next_term;

        count++;
    }
    printf("\n");
}

