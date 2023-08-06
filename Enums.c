#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};
//To declare enums you type enum then an identifier and then you can list as many constants as you would like, and you can give them as associated integer value too

int main()
{
    //Enum = a user defined type of named integer identifiers, they helps to make a program more readable 
    enum Day today = Sun;

    //printf("%d", today); //Enums are not strings, but they can be treated as int

    if (today == Sun || today == Sat)
    {
        printf("\tIt's the weekend!! Rest day's!!");
    }
    else
    {
        printf("\tI have to work today!!");
    }
    
    return 0;
}