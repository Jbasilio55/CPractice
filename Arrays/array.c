#include <stdio.h>

int main()
{
    // array = a data structure that can store many values of the same data type.

    double prices[] = {5.0, 7.0, 9.0, 11.1, 14.5, 17.3};

    double newPrices[3];
    newPrices[0] = 1.00;
    newPrices[1] = 2.00;
    newPrices[2] = 3.00;

    char name[] = "Jorge Luis";

    printf("$%.2lf\n", prices[3]);
    printf("$%.2lf\n", newPrices[2]);

    return 0;
}