#include <stdio.h>
#include <string.h>

//typedef char user[25];

//With a stuct if i would like to use the typedef keyword i'll precede the struct keyword with typedef and after the last curly brace i will add my nickname
 typedef struct 
{
    char name[25];
    char password[21];
    int id;
} User;



int main()
{
    //typedef = reserved keyword that gives an existing datatype a "nickname"

    User user1 = {"Francisco", "Arantes", 16864};
    User user2 = {"Joana", "Faria", 18};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("\n");
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);
    return 0;
}

//If we use the typedef keyword when declaring a struct we no longer need to use that struct keyword to create a struct we can just use this nickname(User) as the datatype and then
//come up with some unique varaible name (user1)