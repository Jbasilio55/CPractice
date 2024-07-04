#include <stdio.h>

int main()
{
    char operator;
    double num1;
    double num2;
    double total;

    printf("\nOperator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("\n---------- Basic Calculator ----------\n");
    printf("\nFirst number: ");
    scanf("%lf", &num1);

    printf("\nSecond number: ");
    scanf("%lf", &num2);

    switch(operator)
    {
        case '+':
            total = num1+num2;
            printf("total: %.2lf\n", total);
            break;
        case '-':
            total = num1-num2;
            printf("total: %.2lf\n", total);
            break;
        case '*':
            total = num1*num2;
            printf("total: %.2lf\n", total);
            break;
        case '/':
            if(num1 == 0 && num2 > num1)
            {
                printf("Sorry you can not divide by zero.\n");
                break;
            }else
            {
                total = num1+num2;
                printf("total: %.2lf\n", total);
                break;
            }
        default:
            printf("Sorry invalid operator symbol\n");
        
    }
    return 0;
}