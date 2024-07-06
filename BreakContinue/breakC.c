#include <stdio.h>

int main()
{
    // continue = skips rest of the code & forces the next iteration of the loop
    // break = exits the loop/switch

    for(int i = 0; i <= 20; i++)
    {
        if(i == 13)
        {
            continue;
        }

        if(i == 17) 
        {
            break;
        }

        printf("%d\n", i);
    }

    return 0;
}