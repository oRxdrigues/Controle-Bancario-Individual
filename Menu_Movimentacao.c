/* ---------------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                           |
|   Data: 01/11/2026                                                          |
|   RA: 437262-2026 - JOAO                                                    |
|   RA: 441378-2026 - JEAN                                                    |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO      |
|   FUNCAO PRINCIPAL DESTA PAGINA - Insere o menu de movimentaçoes            |
+----------------------------------------------------------------------------*/



#include "funcoes.h"

void Menu_Movimentacao(Lista_Movim *LM, Lista_Conta *L)
{
    int opcao;

    do
    {
        system("cls");
        tela();

        gotoxy(25, 5);
        printf("MENU DE MOVIMENTACOES");

        gotoxy(20, 8);
        printf("1 - Registrar movimentacao");

        gotoxy(20, 10);
        printf("2 - Consultar movimentacoes");

        gotoxy(20, 12);
        printf("3 - Transferencia entre Contas");

        gotoxy(20, 15);
        printf("0 - Voltar ao menu principal");

        gotoxy(20, 19);
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                 cadastrar_movimentacao(LM, L);
                break;

            case 2:
                Consulta_Movi(LM, L);
                break;

            case 3:
                Transferencia_Contas(L);
                break;

            case 0:
                break;

            default:
                gotoxy(20, 21);
                printf("Opcao invalida!");
                getch();
                break;
        }

    } while (opcao != 0);
}
