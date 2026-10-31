/* ---------------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                           |
|   Data: 29/10/2026                                                          |
|   RA: 437262-2026 - JOAO                                                    |
|   RA: 441378-2026 - JEAN                                                    |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO      |
|   FUNCAO PRINCIPAL DESTA PAGINA - Insere o menu da conta.EX inseirir no     |
| inicio da lista de conta                                                    |
+----------------------------------------------------------------------------*/


#include "funcoes.h"

void MenuConta(Lista_Conta *L)
{
    int opcao;

    do
    {
        system("cls");
        tela();

        gotoxy(29, 5);  printf("MENU DE CONTAS");

        gotoxy(20, 7);  printf("1 - Inserir conta no inicio");
        gotoxy(20, 8);  printf("2 - Inserir conta em uma posicao");
        gotoxy(20, 9);  printf("3 - Inserir conta no fim");

        gotoxy(20, 11); printf("4 - Remover conta do inicio");
        gotoxy(20, 12); printf("5 - Remover conta de uma posicao");
        gotoxy(20, 13); printf("6 - Remover conta do fim");

        gotoxy(20, 15); printf("7 - Consultar conta por posicao");
        gotoxy(20, 16); printf("8 - Alterar conta por posicao");

        gotoxy(20, 18); printf("0 - Voltar");

        gotoxy(20, 20); printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
            {
                TipoItem_conta *novo = cadastrarConta();

                if (novo != NULL)
                {
                    inserir_Inicio_Conta(L, novo);
                    gotoxy(6, 23);
                    printf("Conta cadastrada com sucesso!                            ");
                    getch();
                }

                 break;
            }
            case 2:
            {
                TipoItem_conta *novo = cadastrarConta();

                if (novo != NULL)
                {
                    inserir_Posicao_Conta(L, novo);
                    gotoxy(6, 23);
                    printf("Conta cadastrada com sucesso!                            ");
                    getch();
                }

                 break;
            }
            case 3:
            {
                TipoItem_conta *novo = cadastrarConta();

                if (novo != NULL)
                {
                    inserir_Final_Conta(L, novo);
                    gotoxy(6, 23);
                    printf("Conta cadastrada com sucesso!                            ");
                    getch();
                }

                 break;
            }
            case 4:
                break;
            case 5:
                remover_conta_posicao(L);
                gotoxy(5, 23);
                printf("Conta removida com sucesso!");
                getch();

                break;
            case 6:
                break;
            case 7:
                ConsultarConta(L);
                break;
            case 8:
                break;
            case 0:
                break;
            default:
                gotoxy(20, 22);
                printf("Opcao invalida!");
                getch();
                break;
        }

    } while (opcao != 0);
}