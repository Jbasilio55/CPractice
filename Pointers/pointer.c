#include <stdio.h>

void printAge(int *pAge)
{
    printf("\n%d\n", *pAge); // dereference
};

int main()
{

    // pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
    //           some tasks are performed more easily with pointers
    //           * = indirection operator (value at address)

    // ---- ADVANTAGES of Using Pointers ----
    // less time in program execution
    // with the help of pointers, we can create a data structures (liked list, stack, queue)
    // returning more than one values from functions
    // searching and sorting large data very easily
    // Dynamically memory allocation

    int age = 21;
    int *pAge = &age;
    
    printf("\naddress of age: %p", &age);
    printf("\nvalue of age: %d\n", age);

    printf("\naddress of pAge: %p", pAge);
    printf("\nvalue at stored address: %d\n", *pAge);

    printf("\nsize of age: %d bytes", sizeof(age));
    printf("\nsize of age: %d bytes\n", sizeof(pAge));

    printAge(pAge);

    return 0;
}