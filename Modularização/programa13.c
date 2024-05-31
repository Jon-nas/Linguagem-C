#include<stdio.h>
#include<conio.h>

// declaração de variáveis globais

void funcao1(variáveis locais de parâmetros)
{
    // declaração das variáveis locais da função1
    return;
}

// ---------------- Funçao main()-------------------

int main(void)
{
    // declaração das variáveis locais da main()
    return (0);
}
// -------------------------------------------------

/* As variáveis globais serão definidas fora da função main, ou seja,
após a declaração das bibliotecas, e são acessíveis em qualquer parte do programa.

As variáveis locais serão definidas internamente a cada função.
No Programa 13, teremos as variáveis locais da função main e da funcao1,
que serão válidas apenas dentro de cada função. Caso o valor de uma variável local precise ser utilizado em outra função,
esses valores devem ser passados por parâmetros.

Os parâmetros formais estão definidos nos parâmetros das funções e são considerados variáveis locais,
portanto, a lista de parâmetros formais estará definida na funcao1(). */