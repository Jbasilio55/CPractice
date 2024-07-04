#include <stdio.h>
#include <string.h>

int main()
{
    char name[25]; //bytes
    char position[25];
    int age;

    printf("\nWhat is your first name? ");
    scanf("%s", name);

    printf("\nHow old are you? ");
    scanf("%d", &age);

    printf("Your name is %s and you are %d years old \n", name, age);

    // printf("What is your position? ");
    // fgets(position, 25, stdin);

    // printf("Your position is %s", position);

    return 0;
}