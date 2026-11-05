/* ----------------------------------------------------------------------+
| Autor: Jean Rodrigues de Souza                                         |
| Data atualizada: 05/11/2026                                            |
| RA 437262-2026 - JOAO                                                  |
| RA 441378-2026 - JEAN                                                  |
| CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO    |
| Funcao: Exibe o menu de movimentacao financeira                        |
+------------------------------------------------------------------------*/

#include "funcoes.h"

void Menu_Movimentacao(Lista_Movim *LM, Lista_Conta *L)
{
    int opcao;

    do
    {
        system("cls");
        tela();

        gotoxy(25, 4);
        printf("MOVIMENTACAO FINANCEIRA");

        gotoxy(10, 7);
        printf("1 - Registrar Entrada (Credito)");

        gotoxy(10, 9);
        printf("2 - Registrar Saida (Debito)");

        gotoxy(10, 11);
        printf("3 - Consultar Movimentacao");

        gotoxy(10, 13);
        printf("0 - Voltar");

        gotoxy(10, 15);
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                cadastrar_movimentacao(LM, L, "Credito");
                break;

            case 2:
                cadastrar_movimentacao(LM, L, "Debito");
                break;

            case 3:
                Consulta_Movi(LM, L);
                break;

            case 0:
                break;

            default:
                printf("\nOpcao invalida!");
                getch();
        }

    } while (opcao != 0);
}