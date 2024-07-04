#include <stdio.h>
#include <math.h>

int main()
{
    double sideA;
    double sideB;
    double hypotenuse;

    printf("\nwhat is the length of side A: ");
    scanf("%lf", &sideA);
    printf("\nwhat is the length of side B: ");
    scanf("%lf", &sideB);

    hypotenuse = sqrt(pow(sideA, 2) + pow(sideB, 2));

    printf("\nside C = %lf\n", hypotenuse);
}