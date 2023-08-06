#include <stdio.h>

int main()
{
    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};

    //printf("%d bytes\n", sizeof(prices)); //size of operator and pass in your array of prices, each double uses 8 bytes 

    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++) //One way to print an array with loop is using sizeof, that calculates the number of elements in the array
    {
        printf("$%.2lf\n", prices[i]);
    }
    
    return 0;
}