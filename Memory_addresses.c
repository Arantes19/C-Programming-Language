#include <stdio.h>

int main()
{
    // memory = an array of bytes whitin RAM (street)
    // memory block = a single unit (byte) whithin memory, used to hold some value (person)
    // memory address = the address of where a memory block is located (house address)

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    char d[2]; //array d uses up 2 bytes; if i change the data type of the array we'll have to take that into consideration. (short 2bytes * 2 = 4bytes ; int 4bytes * 2 = 8bytes)  

    printf("%d bytes\n", sizeof(a)); // short - 2bytes ; int - 4bytes ; doubles - 8bytes
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));
    printf("%d bytes\n", sizeof(d));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("%p\n", &d);


    return 0;
}