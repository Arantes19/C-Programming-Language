#include <stdio.h>
#include <string.h>


//Array of strings its a two-dimensional array of characters but envolves less stops
int main()
{
    char cars[][10] = {"Mustang","Corvette","Camaro"};

    //cars[0] = "Tesla"; (Error)
    strcpy(cars[0], "Tesla");

    for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }
    
    return 0;
}