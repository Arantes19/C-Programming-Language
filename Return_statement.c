#include <stdio.h>

double square(double x) //6º: We need to list the data type of what we're returning within the function declaration it was void but we're returning a double
                        //2º: Function named square, square will accept one argument (double x)
{
    //4º: Within our square function let's set double result, effectively squaring it
    double result = x * x;
    return result;  //5º: To return a value back to the calling function we will use this return keyword follow by some value or variable (result)
                    //6º: We need to list the data type of what we're returning within the function declaration it was void but we're returning a double
                    //7º: So basically you can place it within a function and return a value or varaible back to the calling function and the spot in which you invoke the function
                    //8º: If you're going to return a value or a variable within the function declaration you need to change void to data type you're returning

    //We can also repace that to:  return x * x, would work the same!
}

int main()
{   
    double x = square(4); //3º: When we call a function we can also return a value back to the spot which we call a function 
    printf("%lf", x);
    

    return 0;
}

//1º: Return = return a value back to a calling function