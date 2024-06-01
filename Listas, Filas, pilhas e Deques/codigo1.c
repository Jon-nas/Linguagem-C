// Alocação sequencial na linguagem C.
#include <stdio.h>
#include<conio.h>

int x, y, z;

int main()
{
    int vetor[10];
    int a = 50;
    vetor[3] = a;

    printf("%d", &vetor);
    return(0);
}