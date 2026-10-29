/* ----------------------------------------------------------------------+
|   Autor : Joao Augusto Ferri Camargo                                   |
|   Data: 26/10/2026                                                     |
|   RA: 437262-2026 - JOAO                                               |
|   RA: 441378-2026 - JEAN                                               |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACA  |
|   FUNCAO PRINCIPAL DESTA PAGINA - REALIZAR REMOCAO EM DETERMIANDA      |
|   POSICAO DA LISTA                                                     |
+-----------------------------------------------------------------------*/

#include "funcoes.h"

void ramover_conta_posicao(Lista_conta *L)
{

    TipoItem_conta *p2;

    if (L->inicio == NULL)
    {
        return 0;
    }
    // Para caso haja somente um no na lista
    if (L->incio == L->fim)
    {
        free(L->inicio);
        L->incio = NULL;
        L->fim = NULL;
    } // remove dentro da posicao
    else
    {
        // funcao onde me entrega atraves de um ponteiro (p), a posicao digitada
        Obter_Posicao_Conta(L, pos - 1);
        p2 = p->ant;
        p2->prox = p->prox;
        free(p);
    }

    // caso seja a ultima posicao da lista
    if (p == L->fim)
    {
        L->fim = p->ant;
        free(p);
        L->fim->prox = NULL;
    }
}
