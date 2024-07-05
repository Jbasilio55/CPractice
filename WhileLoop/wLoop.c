#include <stdio.h>
#include <string.h>

int main()
{
    char name[25];

    printf("What is your Name? ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0)
    {
        printf("\nPlease enter a name!!");

        printf("\nWhat is your Name? ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s", name);
    return 0;
}