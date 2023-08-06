#include <stdio.h>

int main()
{
    //Bitwise operators = special operators used in bit level programming

/*   & = AND
     | = OR
     ^ = XOR
     << left shift
     >> right shift  
*/
    int x = 6;  // 6 =  00000110
    int y = 12; // 12 = 00001100
    int z = 0;  // 0 =  00000000~

    z = x & y;
                // 00000110 = 6
                // 00001100 = 12
                // 00000100 = 4

    printf("AND = %d\n", z);

    z = x | y;
                // 00000110 = 6
                // 00001100 = 12
                // 00001110 = 14
    printf("OR = %d\n", z);

    z = x ^ y;
                // 00000110 = 6
                // 00001100 = 12
                // 00001010 = 10
    printf("XOR = %d\n", z);

    z = x << 2;
                // 00000110 = 6
                // 00001100 = 12
                // 00011000 = 24     OBS: Every time we shift a binary number to the left it effectively doubles.
    printf("SHIFT LEFT = %d\n", z);

    z = x >> 1;
                // 00000110 = 6
                // 00001100 = 12
                // 00000011 = 3      OBS: Every time we shift right we're effectively cutting our number in half
    printf("SHIFT RIGHT = %d\n", z);

}