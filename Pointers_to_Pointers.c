#include <stdio.h>

int main()
{
    int r = 5;
    int *p= &r;
    int **pp = &p;

    /*r= 10;
    *p = 10;
    **pp = 10;*/


    printf("Valor de r: %d\nValor de *p: %d\nValor de **pp: %d", r, *p, **pp);
}