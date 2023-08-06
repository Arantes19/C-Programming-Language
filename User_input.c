#include <stdio.h>
#include <string.h>

int main()
{
    char name[25]; //bytes
    int age;

    printf("\n\tWhat's your name: "); //if you need to put your first and last name using a whitespace...
    //scanf("%s", &name);
    fgets(name, 25, stdin); //even only using this function it will badly displays the output, one solution is includes string.h and the follow new function name[...]='..';
    name[strlen(name)-1] = '\0';

    printf("\tHow old are you? ");
    scanf("%d", &age);

    printf("\n\tHello %s, how are you?", name);
    printf("\n\tYou are %d years old", age);

    return 0; //this is how do you accept user input
}