
/* ----------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                      |
|   Data: 02/11/2026                                                     |
|   RA: 437262-2026 - JOAO                                               |
|   RA: 441378-2026 - JEAN                                               |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO |
|   FUNCAO PRINCIPAL DESTA PAGINA - Insere uma conta no inicio da lista  |
+-----------------------------------------------------------------------*/

#include "funcoes.h"

// Insere uma conta no inicio da lista simplesmente encadeada.
void inserir_Inicio_Conta(Lista_Conta *L, TipoItem_conta *novo)
{
    // Verifica se a lista ou o novo elemento sao invalidos.
    if (L == NULL || novo == NULL)
        return;

    // Liga o novo elemento ao primeiro elemento atual.
    novo->prox = L->inicio;

    // Atualiza o inicio da lista para o novo elemento.
    L->inicio = novo;

    // Se a lista estava vazia, o novo elemento tambem sera o ultimo.
    if (L->fim == NULL)
        L->fim = novo;

    // Atualiza a quantidade de elementos da lista.
    L->qtd++;
}
