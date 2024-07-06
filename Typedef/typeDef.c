#include <stdio.h>
#include <string.h>

typedef char user[25];

typedef struct
{
    char name[25];
    char password[25];
    int id;
}User;

int main()
{
    // typedef = reserved keyword that gives an existing datatype a "nickname"

    user user1 = "Jorge";
    user user2 = "John";
    user user3 = "Jason";

    User user4 = {"William", "password123", 123456};
    User user5 = {"Mandy", "0000", 0000};

    printf("\n%s", user1);
    printf("\n%s", user2);
    printf("\n%s", user3);

    printf("\nname: %s | password: %s | id: %d", user4.name, user4.password, user4.id);
    printf("\nname: %s | password: %s | id: %d\n", user5.name, user5.password, user5.id);

    return 0;
}