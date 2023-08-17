#include "main.h"
#include <stdio.h>

int main(void)
{
    int r;

    r = _isalpha('H');
    printf("%d", r);
    r = _isalpha('2');
    printf("%d", r);
    printf("\n");

    return (0);
}

