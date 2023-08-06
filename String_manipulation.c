#include <stdio.h>

void StringCopy(char *s, char *t)
{
    while(*s++ = *t++);
}

int Tam(char str[])
{
    int i;
    for (i = 0; str[i]; ++i);
    return i;
}

int main()
{
    char text[] = "francisco";
    char other[20]; 
    StringCopy(other, text);
    printf("A string tem tamanho: %d\n", Tam(other));
}