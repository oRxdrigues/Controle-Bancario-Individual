/* ---------------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                           |
|   Data: 27/10/2026                                                          |
|   RA: 437262-2026 - JOAO                                                    |
|   RA: 441378-2026 - JEAN                                                    |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO      |
|   FUNCAO PRINCIPAL DESTA PAGINA - Insere uma conta em uma posicao da lista  |
+----------------------------------------------------------------------------*/


#include "funcoes.h"

int inserir_Posicao_Conta(Lista_Conta *L, TipoItem_conta *novo)
{
    TipoItem_conta *ant;
    int pos;

    printf("Digite a posicao da conta que deseja inserir: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > L->qtd + 1)
        return 0;

    if (pos == 1)
        inserir_Inicio_Conta(L, novo);
    else if (pos == L->qtd + 1)
        inserir_Final_Conta(L, novo);
    else
    {
        ant = obter_Posicao_Conta(L, pos - 1);

        novo->prox = ant->prox;
        novo->ant = ant;
        ant->prox->ant = novo;
        ant->prox = novo;

        L->qtd++;
    }

    return 1;
}