#include "main.h"
#include <stdio.h>

int main(void)
{
    int result;

    result = add(5, 10);
    printf("5 + 10 = %d\n", result);

    result = add(-2, 7);
    printf("-2 + 7 = %d\n", result);

    result = add(0, 0);
    printf("0 + 0 = %d\n", result);

    return (0);
}

