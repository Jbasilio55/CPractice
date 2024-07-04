#include <stdio.h>

void happyBirthday(char name[])
{
    printf("\n Happy birthday to you!");
    printf("\n Happy birthday to you!");
    printf("\n Happy birthday dear %s", name);
    printf("\n Happy birthday to you!\n");
}

int main()
{   
    happyBirthday("Jorge");
    happyBirthday("Jorge");
    happyBirthday("Jorge");

    return 0;
}