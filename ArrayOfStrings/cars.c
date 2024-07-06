#include <stdio.h>
#include <string.h>

int main()
{
    char cars[][10] = {"Mustang", "Corvette", "BMW", "Dodge"};

    //cars[0] = "Tesla";         // can not change value

    int rows = sizeof(cars)/sizeof(cars[0]);
    printf("\n");

    for(int i = 0; i < rows; i++)
    {
        printf("%s\n", cars[i]);
    }

    printf("\n");

    strcpy(cars[0], "Tesla");

    for(int i = 0; i < rows; i++)
    {
        printf("%s\n", cars[i]);
    }

    printf("\n");

    return 0;
}