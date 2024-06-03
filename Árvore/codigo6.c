// percurso em ordem simetrica.

void ordem_simetrica(No *ptr)
{
    if ptr -> filho_esquerda != NULL
        ordem_simetrica(ptr->filho_esquerda); // percorre recursivamente em ordem simétrica a subárvore esquerda

    printf(ptr->chave); // visita o nó
    
    if ptr -> filho_direita != NULL
        ordem_simetrica(ptr->filho_direita); // percorre recursivamente em ordem simétrica a subárvore direita
}