#include "main.h"
#include <stdio.h>

int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);

    r = _abs(0);
    printf("%d\n", r);

    r = _abs(42);
    printf("%d\n", r);

    return (0);
}

