/* ---------------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                           |
|   Data: 29/10/2026                                                          |
|   RA: 437262-2026 - JOAO                                                    |
|   RA: 441378-2026 - JEAN                                                    |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO      |
|   FUNCAO PRINCIPAL DESTA PAGINA - Insere o menu principal do sistema        |
+----------------------------------------------------------------------------*/

#include "funcoes.h"

void MenuPrincipal(void)
{
    int opcao;
    Lista_Conta L;
    Lista_Movim LM;
    
    iniciaContas(&L);
    Inicia_lista_movi(&LM);

     ler_Lista_Conta(&L);
     ler_Mov_Iniciar(&LM);

    int resultadoContas;
    int resultadoMovimentacoes;

    do
    {
        system("cls");
        tela();

        gotoxy(30, 7);
        printf("MENU PRINCIPAL");

        gotoxy(27, 10);
        printf("1 - Gerenciar contas");

        gotoxy(27, 12);
        printf("2 - Gerenciar movimentacoes");

        gotoxy(27, 14);
        printf("3 - Salvar e sair");

        gotoxy(27, 17);
        printf("Escolha uma opcao: ");

        scanf("%d", &opcao);


        switch (opcao)
        {
        case 1:
            MenuConta(&L);
            break;

        case 2:
            Menu_Movimentacao(&LM, &L);
            break;

        case 3:
            resultadoContas = salvar_Lista_Conta(&L);
            resultadoMovimentacoes = salva_Lista_Movimentacao(&LM);

            gotoxy(4, 20);

            if (resultadoContas == 1 &&
                resultadoMovimentacoes == 1)
            {
                printf("Contas e movimentacoes salvas com sucesso!");
            }
            else
            {
                printf("Erro ao salvar contas ou movimentacoes!");
            }

            getch();
            break;

        case 0:
            break;

        default:
            gotoxy(27, 19);
            printf("Opcao invalida!");
            getch();
            break;
        }

    } while (opcao != 3);
}