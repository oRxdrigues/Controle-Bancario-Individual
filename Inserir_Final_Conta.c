/* ----------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                      |
|   RA: 437262-2026 - JOAO                                               |
|   RA: 441378-2026 - JEAN                                               |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO |
|   FUNCAO PRINCIPAL DESTA PAGINA - Insere uma conta no final da lista   |
+-----------------------------------------------------------------------*/

#include "funcoes.h"

// Insere uma conta no final da lista duplamente encadeada.
void inserir_Final_Conta(Lista_Conta *L, TipoItem_conta *novo)
{
    novo->prox = NULL;
    novo->ant = L->fim;

    if (L->inicio == NULL)
        L->inicio = novo;
    else
        L->fim->prox = novo;

    L->fim = novo;
    L->qtd++;
}