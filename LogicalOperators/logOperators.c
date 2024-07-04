#include <stdio.h>
#include <stdbool.h>

int main()
{
    // logical operators =  && (AND) checks if two conditions are true
    //                      || (OR) checks if at least one condition is true
    //                      ! (NOT) switches the bool value (true -> false | false -> true)

    float temp = 25;
    bool isSunny = true;

    if(temp >= 50 && temp <= 100 && isSunny)
    {
        printf("\nThe weather is good!");
    }else
    {
        printf("\nThe weather is bad!");
    }

    if(temp > 70 && temp < 100 || isSunny)
    {
        printf("\nGo for a walk around the park");
    }
    else
    {
        printf("\nStay in doors!");
    }

    if(!isSunny)
    {
        printf("\nyou will not need an umbrella.\n");
    }
    else
    {
        printf("\nYou will need an umbrella.\n");
    }

    return 0;
}