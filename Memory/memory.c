#include <stdio.h>

int main()
{
    // memory = an array of bytes within RAM (Like a street address)
    // memory block = a single unit (byte) within memory, used to hold some value (like a person)
    // memory address = the address of where a memory block is located (like a home address)

    char a = 'X';
    short b = 'Y';
    int c = 'Z';
    double d = '1';
    int e[] = {1, 2, 3};

    printf("\n%d bytes", sizeof(a));
    printf("\n%d bytes", sizeof(b));
    printf("\n%d bytes", sizeof(c));
    printf("\n%d bytes", sizeof(d));
    printf("\n%d bytes\n", sizeof(e));

    printf("\n%p", &a);
    printf("\n%p", &b);
    printf("\n%p", &c);
    printf("\n%p", &d);
    printf("\n%p\n", &e);

    return 0;
}