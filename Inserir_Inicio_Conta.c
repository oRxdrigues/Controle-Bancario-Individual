/* ----------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                      |
|   Data: 27/10/2026                                                     |
|   RA: 437262-2026 - JOAO                                               |
|   RA: 441378-2026 - JEAN                                               |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO |
|   FUNCAO PRINCIPAL DESTA PAGINA - Insere uma conta no inicio da lista  |
+-----------------------------------------------------------------------*/


#include "funcoes.h"

void inserir_Inicio_Conta(Lista_Conta *L, TipoItem_conta *novo)
{
    novo->ant = NULL;
    novo->prox = L->inicio;

    if (L->inicio != NULL)
        L->inicio->ant = novo;
    else
        L->fim = novo;

    L->inicio = novo;

    L->qtd++;
}