
/* ---------------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                           |
|   Data: 02/11/2026                                                          |
|   RA: 437262-2026 - JOAO                                                    |
|   RA: 441378-2026 - JEAN                                                    |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO      |
|   FUNCAO PRINCIPAL DESTA PAGINA - Insere uma conta em uma posicao da lista  |
+----------------------------------------------------------------------------*/

#include "funcoes.h"

// Insere uma conta na posicao informada da lista simplesmente encadeada.
int inserir_Posicao_Conta(Lista_Conta *L, TipoItem_conta *novo)
{
    TipoItem_conta *anterior;
    int pos;

    // Verifica se a lista ou o novo elemento sao invalidos.
    if (L == NULL || novo == NULL)
        return 0;

    // Solicita a posicao onde a conta sera inserida.
    gotoxy(06, 23);
    printf("Digite a posicao da conta que deseja inserir:              ");
    scanf("%d", &pos);

    // Verifica se a posicao esta dentro dos limites permitidos.
    if (pos < 1 || pos > L->qtd + 1)
        return 0;

    // Se a posicao for 1, insere a conta no inicio.
    if (pos == 1)
    {
        inserir_Inicio_Conta(L, novo);
    }
    // Se a posicao for a ultima, insere a conta no final.
    else if (pos == L->qtd + 1)
    {
        inserir_Final_Conta(L, novo);
    }
    else
    {
        // Localiza o elemento imediatamente anterior a posicao desejada.
        anterior = obter_Posicao_Conta(L, pos - 1);

        // Liga o novo elemento ao proximo elemento da lista.
        novo->prox = anterior->prox;

        // Liga o elemento anterior ao novo elemento.
        anterior->prox = novo;

        // Atualiza a quantidade de elementos da lista.
        L->qtd++;
    }

    // Informa que a insercao foi realizada.
    return 1;
}
