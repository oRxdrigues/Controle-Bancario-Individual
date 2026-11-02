
/* ---------------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                           |
|   Data: 27/10/2026                                                          |
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

    // Solicita a posicao desejada.
    gotoxy(06, 23);
    printf("Digite a posicao da conta que deseja inserir:              ");
    scanf("%d", &pos);

    // Valida a posicao informada.
    if (pos < 1 || pos > L->qtd + 1)
        return 0;

    // Insere no inicio quando a posicao e 1.
    if (pos == 1)
    {
        inserir_Inicio_Conta(L, novo);
    }
    // Insere no final quando a posicao e a ultima disponivel.
    else if (pos == L->qtd + 1)
    {
        inserir_Final_Conta(L, novo);
    }
    else
    {
        // Localiza o elemento anterior a posicao desejada.
        anterior = obter_Posicao_Conta(L, pos - 1);

        if (anterior == NULL)
            return 0;

        // Liga o novo elemento ao restante da lista.
        novo->prox = anterior->prox;
        anterior->prox = novo;

        // Atualiza a quantidade de elementos.
        L->qtd++;
    }

    return 1;
}
