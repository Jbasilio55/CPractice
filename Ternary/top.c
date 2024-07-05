#include <stdio.h>

int findMax(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}

int main()
{
    // ternary operator =   shortcut to if/else when assigning/returning a value
    //                      (condition) ? value if true : value if false

    int num1 = 98;
    int num2 = 111;

    int max = findMax(num1, num2);
    printf("\nMax: %d\n", max);

    return 0;
}