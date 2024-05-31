#include<stdio.h>
#include<conio.h>

// declaração de variaveis globais
float v_nota1, v_nota2;

// parâmetros formais
float media(float x, float y)
{
    return((x + y)/2);
}

int main(void)
{
    // variável local
    float v_media;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &v_nota1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &v_nota2);

    // Usando variaveis globais: nota1, nota2 e variável local: v_media
    v_media = media(v_nota1, v_nota2);

    printf("\nMedia do aluno: %.2f\n", v_media);
    return(0);
}
