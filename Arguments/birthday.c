#include <stdio.h>

void happyBirthday(char name[])
{
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s", name);
}

void birthdayAge(int age)
{
    printf("\nHappy birthday to you!");
    printf("\nYou are %d years old, Congratulations!!!\n", age);
}

int main()
{   
    happyBirthday("Jorge");
    birthdayAge(22);
    return 0;
}