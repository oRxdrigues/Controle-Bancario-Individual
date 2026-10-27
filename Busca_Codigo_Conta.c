/* ----------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                      |
|   Data: 27/10/2026                                                     |
|   RA: 437262-2026 - JOAO                                               |
|   RA: 441378-2026 - JEAN                                               |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO |
|   FUNCAO PRINCIPAL DESTA PAGINA - Busca a conta pelo codigo dela.      |
+-----------------------------------------------------------------------*/


#include "funcoes.h"

TipoItem_conta *busca_Codigo_Conta(Lista_Conta *L, int codigo)
{
    TipoItem_conta *p;

    for (p = L->inicio; p != NULL; p = p->prox)
    {
        if (p->conteudo.codigo_conta == codigo)
            return p;
    }
    return NULL;
}