#include <stdio.h>
#include <stdbool.h>

int main()
{
    //Logical operators = ! (NOT) reverses the state of a condition
    //program that analyse the weather with ! operator
    bool sunny = true;

    if (!sunny)
    {
        printf("\nIt's cloudy outside");
    }
    else
    {
        printf("\nIt's sunny outside");
    }
    
    return 0;
}
