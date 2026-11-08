/* ----------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                      |
|   Data: 27/10/2026                                                     |
|   RA: 437262-2026 - JOAO                                               |
|   RA: 441378-2026 - JEAN                                               |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO |
|   FUNCAO PRINCIPAL DESTA PAGINA - Insere uma conta no final da lista   |
+-----------------------------------------------------------------------*/

#include "funcoes.h"

// Insere uma conta no final da lista duplamente encadeada.
void inserir_Final_Conta(Lista_Conta *L, TipoItem_conta *novo)
{
    // Verifica se a lista ou o novo elemento sao invalidos.
    if (L == NULL || novo == NULL)
        return;

    // Garante que o proximo do novo no sera NULL (pois vai para o fim)
    novo->prox = NULL;

    // Se a lista estiver vazia
    if (L->inicio == NULL)
    {
        novo->ant = NULL;
        L->inicio = novo;
        L->fim = novo;
    }
    else
    {
        // Se a lista ja tem elementos
        novo->ant = L->fim;
        L->fim->prox = novo;
        L->fim = novo;
    }

    // Atualiza a quantidade de elementos.
    L->qtd++;
}