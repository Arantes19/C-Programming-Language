#include <stdio.h>

//Basic form of a function, if u need to repeat some code u can just put him on a function and then u just need to call it putting the name of that function

void birthday()
{
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday dear... you!");
    printf("\nHappy Birthday to you!\n");
}

int main()
{
    birthday();
    birthday(); 
    birthday();

    return 0;
}