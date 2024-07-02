#include <stdio.h>

int main()
{
    // variable =   Allocated space of memory to store value.
    //              We refer to a variable's name to access the stored value.
    //              that variable now behaves as if it was the value it contains
    //              BUT we need to declare what type of data we are storing.

    int x; // declaration 
    x = 123; // initialization
    int y = 321; // declaration and initialization

    int age = 34; // integer
    float gpa = 3.2; // floating point number
    char grade = 'A'; // single character
    char name[] = "Jorge"; //array of characters

    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Yor average grade is \"%c\"\n", grade);
    printf("Your GPA is %f\n", gpa);

    return 0;
}