
/* ----------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                      |
|   Data: 02/11/2026                                                     |
|   RA: 437262-2026 - JOAO                                               |
|   RA: 441378-2026 - JEAN                                               |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO |
|   FUNCAO PRINCIPAL DESTA PAGINA - Insere uma conta no final da lista   |
+-----------------------------------------------------------------------*/

#include "funcoes.h"

// Insere uma conta no final da lista simplesmente encadeada.
void inserir_Final_Conta(Lista_Conta *L, TipoItem_conta *novo)
{
    // Verifica se a lista ou o novo elemento sao invalidos.
    if (L == NULL || novo == NULL)
        return;

    // Como o elemento sera o ultimo, seu proximo sera NULL.
    novo->prox = NULL;

    // Verifica se a lista esta vazia.
    if (L->inicio == NULL)
    {
        // Se estiver vazia, o novo elemento sera o primeiro.
        L->inicio = novo;
        L->fim = novo;
    }
    else
    {
        // Liga o ultimo elemento atual ao novo elemento.
        L->fim->prox = novo;

        // Atualiza o ponteiro que indica o final da lista.
        L->fim = novo;
    }

    // Atualiza a quantidade de elementos da lista.
    L->qtd++;
}
