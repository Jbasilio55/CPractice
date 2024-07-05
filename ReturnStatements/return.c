#include <stdio.h>

double square(double x)
{
    double result = x * x;
    return result;
}

int main()
{   
    double start = 3.14;
    double x = square(start);

    printf("starting num: %.2lf\n", start);
    printf("result (2x): %.2lf\n", x);

    return 0;
}