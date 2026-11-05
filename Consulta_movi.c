
/* ----------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                      |
|   Data: 27/10/2026                                                     |
|   RA: 437262-2026 - JOAO                                               |
|   RA: 441378-2026 - JEAN                                               |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO |
|   FUNCAO PRINCIPAL DESTA PAGINA - Consulta movimentacoes de uma conta  |
+-----------------------------------------------------------------------*/

#include "funcoes.h"

void Consulta_Movi(Lista_Movim *LM, Lista_Conta *L)
{
    TipoItem_movim *aux;
    TipoItem_conta *p;
    int codigo;
    int encontrou = 0;

    system("cls");
    tela();

    gotoxy(20, 4);
    printf("CONSULTA DE MOVIMENTACOES");

    gotoxy(7, 6);
    printf("Digite o codigo da conta: ");
    scanf("%d", &codigo);

    p = busca_Codigo_Conta(L, codigo);

    if (p == NULL)
    {
        gotoxy(7, 23);
        printf("Conta nao encontrada!");
        getch();
        return;
    }

    gotoxy(2, 8);
    printf("Sequencial     Data       Tipo       Favorecido       Valor       Saldo Atual");

    gotoxy(2, 9);
    printf("-------------------------------------------------------------------------------");

    aux = LM->inicio;

    while (aux != NULL)
    {
        if (aux->conteudo.codigo_conta == codigo)
        {
            gotoxy(2, 10);
            printf("%d", aux->conteudo.sequencial);
            gotoxy(17, 10);
            printf("%s", aux->conteudo.data_mov);
            gotoxy(28, 10);
            printf("%s", aux->conteudo.tp_mov);
            gotoxy(39, 10);
            printf("%s", aux->conteudo.ds_favorecido);
            gotoxy(57, 10);
            printf("%.2f", aux->conteudo.vl_movimento);
            gotoxy(70, 10);
            printf("%.2f", aux->conteudo.vl_saldo);

            gotoxy(2, 11);
            printf("-------------------------------------------------------------------------------");

            encontrou = 1;
        }

        aux = aux->prox;
    }

    if (encontrou == 0)
    {
        gotoxy(7, 10);
        printf("Essa conta nao possui movimentacoes.");
    }

    getch();
}
