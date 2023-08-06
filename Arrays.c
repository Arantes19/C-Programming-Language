#include <stdio.h>

#include <stdio.h>

int main()
{
    //array = a data structure that can store many values of the same data type.
    
    /*Initializing an array is much like creating a variable except you will add a set of straight brackets after and then you can
    either add some values right away or later on in your program but you need to list a index number of where you're placing a value within the array and then to
    access a value within your array you type the array name followed by an index number. */

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};
    /*
    double prices[5];

    prices[0] = 5.0;
    prices[1] = 10.0;
    prices[2] = 15.0;
    prices[3] = 25.0;
    prices[4] = 20.0;
    */

    printf("%.2lf", prices[0]);


    //char nane[] = "Francisco"; //


    return 0;
}