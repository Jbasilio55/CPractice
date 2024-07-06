#include <stdio.h>

int main()
{
    char x = 'X';
    char y = 'Y';

    printf("\nx: %c\n", x);
    printf("y: %c\n", y);

    char temp;

    temp = x;
    x = y;
    y = temp;

    printf("\nx: %c\n", x);
    printf("y: %c\n", y);

    return 0;
}