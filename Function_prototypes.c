#include <stdio.h>

void hello(char [], int); //Function prototype
int main()
{
    //What is it?
    //Function declaration, w/o a body, before main()
    //Ensures that calls to a function are made with the correct arguments

    //Important
    /*  Many C compilers do not chack for parameters matching
        Missing arguments will result in unexpected behavior
        A function prototype causes the compiler to flag an error if arguments are missing
    */

    //Advantages
    /*  Easir to navigate a program w/ main() at the top
        Helps with debugging
        Commonly used in header files
    */

    char name[] = "Francisco";
    int age = 20;

    hello(name, age);   //if i attempt to call the hello funcion with only one argument when two are required instead of warning we'll recieve an error
                        //and it states that there are too few arguments to function hello and this program will not compile and run successfully.

    return 0;
}

void hello(char name[], int age)
{
    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);
}