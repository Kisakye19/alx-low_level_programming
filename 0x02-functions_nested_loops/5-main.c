#include "main.h"
#include <stdio.h>

int main(void)
{
    int result;

    result = print_sign(98);
    _putchar(',');
    _putchar(' ');
    printf("%d\n", result);

    result = print_sign(0);
    _putchar(',');
    _putchar(' ');
    printf("%d\n", result);

    result = print_sign(0xff);
    _putchar(',');
    _putchar(' ');
    printf("%d\n", result);

    return (0);
}


