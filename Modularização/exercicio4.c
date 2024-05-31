#include<stdio.h>
#include<stdlib.h>

// Funão soma
int soma(int x, int y)
{
    return(x + y);
}

//Programa principal
int main()
{
    int num1, num2, total;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    total = soma(num1, num2);
    printf(" A Soma de %d e %d = %d\n", num1, num2, total);

    system("Pause");
    return (0);
}