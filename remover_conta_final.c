/* ----------------------------------------------------------------------+
|   Autor : Joao Augusto Ferri Camargo                                   |
|   Data: 27/10/2026                                                     |
|   RA: 437262-2026 - JOAO                                               |
|   RA: 441378-2026 - JEAN                                               |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACA  |
|   FUNCAO PRINCIPAL DESTA PAGINA - REALIZAR REMOCAO DE CONTA NO FINAL   |
|   DA LISTA                                                             |
+-----------------------------------------------------------------------*/

#include "funcoes.h"

void remover_conta_final(Lista_Conta *L)
{

    TipoItem_conta *p;

    if (L->inicio == NULL)
    {
        return;
    }

    p = L->fim;

    if (L->inicio == L->fim)
    {
        free(L->inicio);
        L->inicio = NULL;
        L->fim = NULL;
    }
    else
    {
        L->fim = p->ant;
        free(p);
        L->fim->prox = NULL;
    }
}
