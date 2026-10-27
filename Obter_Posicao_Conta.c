/* ----------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                      |
|   Data: 27/10/2026                                                     |
|   RA: 437262-2026 - JOAO                                               |
|   RA: 441378-2026 - JEAN                                               |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO |
|   FUNCAO PRINCIPAL DESTA PAGINA - Obtem o codigo da Conta.             |
+-----------------------------------------------------------------------*/


#include "funcoes.h"

/* devolve o no da posicao pos (1 = primeiro), ou NULL se invalida */
TipoItem_conta *obter_Posicao_Conta(Lista_Conta *L, int pos)
{
    TipoItem_conta *p = L->inicio;
    int i;

    if (pos < 1 || pos > L->qtd)
        return NULL;

    for (i = 1; i < pos; i++)
        p = p->prox;

    return p;
}
