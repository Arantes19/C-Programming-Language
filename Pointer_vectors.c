#include <stdio.h>
#include <string.h>

char *nomeMes(int mes)
{
    char *nome[] = {
        "mes ilegal",
        "janeiro",
        "fevereiro",
        "marco",
        "abril",
        "maio",
        "junho",
        "julho",
        "agosto",
        "setembnro",
        "outubro",
        "novembro",
        "dezembro"};

    return ((mes < 1 || mes > 12) ? nome[0] : nome[mes]);
}

int main()
{
    int mes = 5; // example month value
    char *nomeDoMes = nomeMes(mes);
    printf("O mes e: %s\n", nomeDoMes);
    return 0;
}
