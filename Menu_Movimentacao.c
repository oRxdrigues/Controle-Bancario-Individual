
/* ----------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                      |
|   Data: 08/11/2026                                                     |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO |
|   FUNCAO: Menu de movimentacoes bancarias.                             |
+-----------------------------------------------------------------------*/

#include "funcoes.h"

void Menu_Movimentacao(Lista_Movim *LM, Lista_Conta *L)
{
    int opcao;

    do
    {
        system("cls");
        tela();

        gotoxy(22, 3);
        printf("MENU DE MOVIMENTACOES BANCARIAS");

        gotoxy(18, 7);
        printf("1 - Movimentacao de Debito e Credito");

        gotoxy(18, 9);
        printf("2 - Transferencia entre Contas Bancarias");

        gotoxy(18, 11);
        printf("3 - Consulta Movimentacoes Bancarias");

        gotoxy(18, 13);
        printf("4 - Retornar ao Menu Anterior");

        gotoxy(7, 23);
        printf(" Digite sua Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                /* Mantem a movimentacao de debito e credito */
                Menu_Debito_Credito(LM, L);
                break;

            case 2:
                Transferencia_Contas(L);
                break;

            case 3:
                Consulta_Movi(LM, L);
                break;

            case 4:
                break;

            default:
                gotoxy(7, 24);
                printf("Opcao invalida!");
                getch();
                break;
        }

    } while (opcao != 4);
}
