// Percurso em pós-ordem

void pos_ordem(No *ptr)
{
    if ptr -> filho_esquerda != NULL
        pos_ordem(ptr->filho_esquerda); // percorre recursivamente em pós-ordem a subárvore esquerda

    if ptr -> filho_direita != NULL
        pos_ordem(ptr->filho_direita); // percorre recursivamente em pós-ordem a subárvore direita

    printf(ptr->chave); // visita o nó
}