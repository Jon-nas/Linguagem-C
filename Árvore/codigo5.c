// Percurso em pré-ordem.

void pre_ordem(No *ptr)
{
    printf(ptr->chave); // visita o nó
    if ptr -> filho_esquerda != NULL
        pre_ordem(ptr->filho_esquerda); // percorre recursivamente em pré-ordem a subárvore esquerda
    if ptr -> filho_direita != NULL
        pre_ordem(ptr->filho_direita); // percorre recursivamente em pré-ordem a subárvore direita
}