#include <stdio.h>

void birthday(char x[], int y)  //After we pass the variables as arguments we need a matching set of parameters within funcion declaration
                                //Between this parentheses we will list our name & age precede the each with the data type that we're working with
                                //These are paremeters, parameters are what this function needs in order to be executed!!
{
    printf("\nHappy Birthday dear %s!", x);
    printf("\nYou are %d years old!\n", y);
}

int main()
{   
    //WARNING: functions can't see inside other functions
    char name[] = "Francisco";
    int age = 20;

    birthday(name, age);    //We need to pass these variables (name & age) as arguments between the parentheses
                            //Anything you're passing to a function are known as arguments

    //WHEN YOU CALL A FUNCTION YOU CAN PASS SOME ARGUMENTS BUT YOU NEED A MATCHING SET OF PARAMETERS AND THE NAME OF THESE PAREMETERS DON'T NECESSARILY
    //HAVE TO BE THE SAME, WHAT'S IMPORTANT IS THE ORDER OF THE ARGUMENTS

    return 0;
}