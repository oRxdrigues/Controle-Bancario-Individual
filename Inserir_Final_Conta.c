
/* ----------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                      |
|   Data: 27/10/2026                                                     |
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

    // O novo elemento sera o ultimo da lista.
    novo->prox = NULL;

    // Verifica se a lista esta vazia.
    if (L->inicio == NULL)
    {
        L->inicio = novo;
        L->fim = novo;
    }
    else
    {
        // Liga o ultimo elemento atual ao novo elemento.
        L->fim->prox = novo;
        L->fim = novo;
    }

    // Atualiza a quantidade de elementos.
    L->qtd++;
}
