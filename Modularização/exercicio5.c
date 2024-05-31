/* #include<stdio.h>

void dobro(int v_num)
{
    v_num = v_num * 2;
}

int main(void)
{
    int v_num;

    printf("Insira um numero: ");
    scanf("%d", &v_num);

    dobro(&v_num);
    printf("O dobro eh: %d\n", &v_num);
    return 0;
} */

#include<stdio.h>

void dobro(int *pt_num)
{
    (*pt_num) = (*pt_num) * 2;
}

int main(void)
{
    int v_num;

    printf("Insira um numero: ");
    scanf("%d", &v_num);

    dobro(&v_num);
    printf("O dobro eh: %d\n", v_num);
    return 0;
}