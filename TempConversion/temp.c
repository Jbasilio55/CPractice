#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit;
    float temp;

    printf("\nIs the temperature in (C) or (F)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C')
    {
        printf("What is the Temperature(C): ");
        scanf("%f", &temp);
        temp = (temp * 9/5) + 32;
        printf("\nConversion -> (F): %f\n", temp);
    }
    else if(unit == 'F')
    {
        printf("What is the Temperature(F): ");
        scanf("%f", &temp);
        temp = (temp - 32) * 5/9;
        printf("\nConversion -> (C): %f\n", temp);
    }
    else
    {
        printf("Sorry invalid character!");
    }

    return 0;
}