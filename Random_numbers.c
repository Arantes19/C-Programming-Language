#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    //How to generate random numbers in C

int main()
{
    //pseudo random numbers = A set of values or elements that are statiscally random (Don't use these for any sort of cryptographic security)

    //Use the current time to generate a seed
    srand(time(0)); //s = seed, rand = random

    int number1 = (rand() % 6) + 1; //give you a ranodm number between 0-32767
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1;
    
    printf("%d\t", number1);
    printf("%d\t", number2);
    printf("%d", number3);

    return 0;
}