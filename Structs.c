#include <stdio.h>
#include <string.h>

//typedef int Player2; 

struct Player
{
    char name[12];
    int score;
};

int main()
{
    //Player2 p;

    //Structs = collection of related members ("variables") they can be of different data types listed under one name in block of memory
    //          very similar to classes in other languages (but no methods).

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Francisco");
    player1.score = 4;

    strcpy(player2.name, "Joana");
    player2.score = 5;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);


    return 0;
}