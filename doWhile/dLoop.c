#include <stdio.h>

int main()
{
    //while loop = checks a condition, THEN executes a block of code if condition is true
    //do while loop = always executes a block of code once, THEN checks the condition

    int number = 0;
    int sum = 0;

    
    do{
        printf("\nPlease enter a number greater than 0: ");
        scanf("%d", &number);

        if(number > 0)
        {
            sum += number;
        }
    }while(number > 0);

    printf("\nsum: %d\n", sum);

    return 0;
}