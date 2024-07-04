#include <stdio.h>

int main()
{
    // arithmetic operators

    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus)
    // ++ increment
    // -- decrement

    int x = 5;
    int y = 2;

    int z = x + y;
    printf("%d\n", z);

    z = x - y;
    printf("%d\n", z);

    z = x * y;
    printf("%d\n", z);

    float a = x / (float) y;
    printf("%f\n", a);

    z = x % y;
    printf("%d\n", z);

    z = x++ + y;
    printf("%d\n", z);

    z = ++x + y;
    printf("%d\n", z);

    z = x + y--;
    printf("%d\n", z);

    z = x + --y;
    printf("%d\n", z);

    return 0;
}