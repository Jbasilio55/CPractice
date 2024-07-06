#include <stdio.h>
#include <string.h>

struct Player
{
    char name[25];
    int score;
};

int main()
{
    //struct =  collection or related members ("variables")
    //          they can be of different data types
    //          listed under one name in a block of memory
    //          VERY SIMILAR to classes in other languages (but no methods)

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Jorge");
    player1.score = 10;

    strcpy(player2.name, "John");
    player2.score = 25;

    printf("\n%s's score: %d", player1.name, player1.score);
    printf("\n%s's score: %d\n", player2.name, player2.score);

    return 0;
}