
/* ----------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                      |
|   Data: 27/10/2026                                                     |
|   RA: 437262-2026 - JOAO                                               |
|   RA: 441378-2026 - JEAN                                               |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO |
|   FUNCAO PRINCIPAL DESTA PAGINA - Insere uma conta no inicio da lista  |
+-----------------------------------------------------------------------*/

#include "funcoes.h"

// Insere uma conta no inicio da lista duplamente encadeada.
void inserir_Inicio_Conta(Lista_Conta *L, TipoItem_conta *novo)
{
    // Verifica se a lista ou o novo elemento sao invalidos.
    if (L == NULL || novo == NULL)
        return;

    // Liga o novo elemento ao inicio atual da lista.
    novo->ant = NULL;
    novo->prox = L->inicio;

    // Se a lista estiver vazia, o novo elemento sera o primeiro e o ultimo.
    if (L->inicio == NULL)
    {
        L->inicio = novo;
        L->fim = novo;
    }
    else
    {
        // Liga o antigo primeiro elemento ao novo elemento.
        L->inicio->ant = novo;
        L->inicio = novo;
    }

    // Atualiza a quantidade de elementos.
    L->qtd++;
}
