#include "main.h"

/**
 * sum_of_multiples - Computes and prints the sum of multiples of 3 or 5
 *
 * Return: The sum of the multiples
 */
int sum_of_multiples(void)
{
    int sum = 0;
    int i;

    for (i = 0; i < 1024; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    }

    return sum;
}

