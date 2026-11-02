/* ----------------------------------------------------------------------+
|   Autor : Joao Augusto Ferri Camargo                                   |
|   Data: 27/10/2026                                                     |
|   RA: 437262-2026 - JOAO                                               |
|   RA: 441378-2026 - JEAN                                               |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACA  |
|   FUNCAO PRINCIPAL DESTA PAGINA - Cadastra movimentacao                |
|                                                                        |
+-----------------------------------------------------------------------*/

#include "funcoes.h"

TipoItem_movim *cadastrar_movimentacao(Lista_Movim *LM, Lista_Conta *L)
{

    TipoItem_movim *novo; int pos;
    TipoItem_conta *p;
    int gravar;

    novo = malloc(sizeof(TipoItem_movim));

    gotoxy(04, 07);
    printf("Codigo_conta..........: ");
    gotoxy(28, 07);
    scanf("%d", &pos);

    p = obter_Posicao_Conta(L, pos);

    system("cls");
    tela();
    tela_Movimentacao();

    gotoxy(31, 5);
    printf("%d", LM->qtd + 1);

    gotoxy(31, 7);
    printf("%d", p->conteudo.codigo_conta);

    gotoxy(31, 9);
    scanf(" %9[^\n]", novo->conteudo.data_mov);

    gotoxy(31, 11);
    scanf("%d", novo->conteudo.tp_mov);

    gotoxy(31, 13);
    scanf(" %19[^\n]", novo->conteudo.ds_favorecido);

    gotoxy(31, 15);
    scanf("%lf", &novo->conteudo.vl_movimento);

    gotoxy(31, 15);
    printf("%lf", p->conteudo.vl_saldo);

    gotoxy(31, 15);
    printf("%lf", p->conteudo.vl_limite);

    gotoxy(5, 23);
    printf("Deseja realizar a transferencia? 1-Sim / 2-Nao: ");
    gotoxy(53, 23);
    scanf("%d", &gravar);

    if (novo == NULL)
    {
        novo->prox = NULL;
        return NULL;
    }

    if (gravar == 1)
    {

        if (strcmp(novo->conteudo.tp_mov, "Debito") == 0)
        {
            if (p->conteudo.vl_saldo - novo->conteudo.vl_movimento >= 0)
            {
                printf("Movimentacao realizada!");
                getch();
                return novo;
            }
            else
            {
                printf("Valor de movimentacao maior do que saldo!");
                free(novo);
                getch();
                return NULL;
            }
        }
        else if (strcmp(novo->conteudo.tp_mov, "Credito") == 0)
        {
            if (p->conteudo.vl_saldo + p->conteudo.vl_limite >= novo->conteudo.vl_movimento)
            {
                printf("Movimentacao realizada!");
                getch();
                return novo;
            }
            else
            {
                printf("Valor de movimentacao maior do que limite da conta!");
                free(novo);
                getch();
                return NULL;
            }
        }
        else
        {
            printf("Tipo de movimentacao nao existente!");
            free(novo);
            getch();
            return NULL;
        }
    }
    else if (gravar == 2)
    {
        printf("Movimentacao cancelada!");
        getch();
        free(novo);
        return NULL;
    }
    else
    {
        printf("Opcao invalida!");
        getch();
        free(novo);
        return NULL;
    }
}
