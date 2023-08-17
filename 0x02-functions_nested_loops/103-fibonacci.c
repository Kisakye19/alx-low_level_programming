#include "main.h"
#include <stdio.h>

/**
 * sum_even_fibonacci - Computes and prints the sum of even-valued
 *                      Fibonacci terms not exceeding 4,000,000
 *
 * Return: The sum of the even-valued terms
 */
int sum_even_fibonacci(void)
{
    int term1 = 1, term2 = 2, next_term, sum = 0;

    while (term2 <= 4000000)
    {
        if (term2 % 2 == 0)
            sum += term2;

        next_term = term1 + term2;
        term1 = term2;
        term2 = next_term;
    }

    return sum;
}

