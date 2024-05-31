#include<stdio.h>

void dobro(int *pt_num)
{
    printf("Conteudo da variaável ponteiro pt_num: %x\n", pt_num);
    (*pt_num) = (*pt_num) * 2;
}

int main(void)
{
    int v_num;

    printf("Insira um numero: ");
    scanf("%d", &v_num);

    printf("\nAntes de executar a FUNÇÃO DOBRO\n");
    printf("Conteudo da variavel v_num: %d\n", v_num);
    printf("Endereço de memoria da variavel v_num: %x\n\n", &v_num);

    printf("Apos a excutar a FUNÇâO DOBRO\n");
    dobro(&v_num);
    printf("O dobro eh: %d\n", v_num);

    return 0;
}