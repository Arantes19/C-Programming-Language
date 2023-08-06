#include <stdio.h>

int main()
{
    const double PI = 3.14159;
    double radius;
    double circumference; 
    double area;

    printf("\nEnter radius of a circle: "); 
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;    //Formula para determinar a circunferencia:  2πr
    area = PI * radius * radius;        //Fórmula para determinar a área do circulo: πr2

    printf("\nCircumference: %lf", circumference);
    printf("\nArea: %lf", area);

    return 0;
}