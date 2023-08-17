#include "main.h"
#include <stdio.h>

int main(void)
{
    int r;

    r = _islower('H');
    printf("%d", r);
    r = _islower('o');
    printf("%d", r);
    printf("\n");

    return (0);
}

