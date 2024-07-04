#include <stdio.h>

int main()
{
    int age;

    printf("\nWhat is your age? ");
    scanf("%d", &age);

    if(age <= 0)
    {
        printf("\nSorry you have not been born yet!\n");
    }
    else if(age < 21)
    {
        printf("\nUnfortunately you are unable to drink!\n");
    }
    else if(age > 70)
    {
        printf("\nYou can drink but will not advise it because you are too old!\n");
    }else
    {
        printf("\nYou are legally able to drink!\n");
    }

    return 0;
}