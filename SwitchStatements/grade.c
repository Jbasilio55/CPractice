#include <stdio.h>

int main()
{
    //switch =  A more efficient alternative to using many "else if" statements
    //          allows a value to be tested for equality against many cases

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch(grade)
    {
        case 'A':
            printf("You did excellent!\n");
            break;
        case 'B':
            printf("You did great!\n");
            break;
        case 'C':
            printf("You did ok!\n");
            break;
        case 'D':
            printf("You did poor!\n");
            break;
        case 'F':
            printf("You did absolutely terrible!\n");
            break;
        default:
            printf("Sorry invalid letter grade.\n");
    }

    return 0;
}