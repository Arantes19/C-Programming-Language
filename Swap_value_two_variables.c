#include <stdio.h>
#include <string.h>

int main()
{
    char x[15] = "water"; //Warning: if the length of the second argument is less than first argument this can lead to unexpected behavior
    char y[15] = "fire";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s\n", x);
    printf("y = %s\n", y);

    
    /*
    char x = 'X';
    char y = 'Y';
    char temp;

    temp = x;
    x = y;
    y = temp;

    printf("x = %c\n", x);
    printf("y = %c\n", y);
    */

    return 0;
}
