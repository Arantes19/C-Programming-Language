#include <stdio.h>
#include <stdlib.h>

void erro()
{
    printf("Erro de memória\n");
    exit(-1);
}

int main()
{
    //  A variável p é um apontador para inteiro, antes de colocar o valor apontado por p é necessário reservar espaço para um inteiro.
    //  A variável v é um apontador para inteiro, é lhe atribuido um espaço para 2 inteiros com a função calloc para o v poder ser utilizado
    int *p, *v, i;

    p = (int *)malloc(sizeof(int));     //Reservar espaço para um inteiro
    if(!p) erro();
    v = (int *)calloc(2, sizeof(int));  //Atribuição de espaço para 2 inteiros
    if(!v) erro();
    //  No caso de qualquer alguma das funções devolver NULL é invocada a função erro e o programa termina

    *p = 10;
    v[0] = 20;
    v[1] = 30;

    v = realloc(v, 4 * sizeof(int));    // v é redimensionado para o tamanho de 4 inteiros

    v[2] = 40;
    v[3] = 50;

    printf("p: %d\nv: ", *p);
    for (i = 0; i < 4; i++)
        printf("%d ", v[i]);
    printf("\n");
    free(p);
    free(v);
     
}