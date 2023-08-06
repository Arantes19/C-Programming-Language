#include <stdio.h>
#include <math.h> //we need to have this headerfile

int main()
{
    double A = sqrt(9);     //%lf
    double B = pow(2, 4);   //%d
    int C = round(3.14);    //%d
    int D = ceil(3.14);     //%d
    int E = floor(3.99);    //%d
    double F = fabs(-100);  //%lf
    double G = log(3);      //%lf
    double H = sin(45);     //%lf
    double I = cos(45);     //%lf
    double J = tan(45);     //%lf

  printf("\n%lf", A);
    return 0;
}