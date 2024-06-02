// Função de empilhamento.

int push(Elemento elemento)
{
    No *novo_no = (No *) calloc (1, sizeof (No));
    if (novo_no != NULL)
    {
        novo_no->elemento = elemento;
        novo_no -> prox = topo;
        topo = novo_no;
        return 1; //sucesso
    }

    else
    {
        return 0; //falha
    }
}