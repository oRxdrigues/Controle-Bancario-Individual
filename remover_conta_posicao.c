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

void remover_conta_posicao(Lista_Conta *L)
{
    TipoItem_conta *p, *p2;
    int pos;


    printf("Digite a posicao da conta que deseja remover: ");
    scanf("%d", &pos);

    if (L->inicio == NULL || pos < 1 || pos > L->qtd)
    {
        return;
    }

    // Para caso haja somente um no na lista
    if (L->inicio == L->fim)
    {
        free(L->inicio);
        L->inicio = NULL;
        L->fim = NULL;
    }
    else
    {
        // Obtem o no da posicao digitada
        p = obter_Posicao_Conta(L, pos);

        // Caso seja a ultima posicao da lista
        if (p == L->fim)
        {
            L->fim = p->ant;
            L->fim->prox = NULL;
        }
        // Caso seja a primeira posicao da lista
        else if (p == L->inicio)
        {
            L->inicio = p->prox;
            L->inicio->ant = NULL;
        }
        // Remove dentro da posicao
        else
        {
            p2 = p->ant;
            p2->prox = p->prox;
            p->prox->ant = p2;
        }

        free(p);
    }

    L->qtd--;
}