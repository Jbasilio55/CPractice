#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int main()
{
    // enum = a user defined type of named integer identifiers
    //        helps to make a program more readable

    enum Day today = Sat;

    printf("\n%d\n", today); //enums are NOT Strings, but they can be treated as int

    if(today == Sat || today == Sun)
    {
        printf("Today is a weekend");
    }
    else
    {   
        printf("Today is a weekday");
    }

    return 0;
}