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
    TipoItem_movim *novo;
    TipoItem_conta *p;
    int codigo;
    int gravar;

    system("cls");
    tela();
    tela_Movimentacao();

    // Onde a pessoa digita o numero da conta para puxar algumas informações
    gotoxy(31, 7);
    scanf("%d", &codigo);

    p = busca_Codigo_Conta(L, codigo);
    if (p == NULL)
    {
        gotoxy(7, 23);
        printf("Conta nao encontrada! Pressione uma tecla...");
        getch();
        return NULL;
    }

    novo = malloc(sizeof(TipoItem_movim));
    if (novo == NULL)
    {
        gotoxy(7, 23);
        printf("Transacao nao realizada!");
        getch();
        return NULL;
    }
    novo->prox = NULL;
    novo->ant = NULL;

    // aumenta quantidade, para mostrar o numero da transacao
    novo->conteudo.sequencial = LM->qtd + 1;
    novo->conteudo.codigo_conta = p->conteudo.codigo_conta;

    gotoxy(31, 5);
    printf("%d", novo->conteudo.sequencial);

    gotoxy(31, 9);
    scanf(" %10[^\n]", novo->conteudo.data_mov);

    gotoxy(31, 11);
    scanf("%d", novo->conteudo.tp_mov);

    gotoxy(31, 13);
    scanf(" %49[^\n]", novo->conteudo.ds_favorecido);

    gotoxy(31, 15);
    scanf("%lf", &novo->conteudo.vl_movimento);

    gotoxy(31, 17);
    printf("%.2f", p->conteudo.vl_saldo, );

    gotoxy(7, 23);
    printf("Deseja realizar a transferencia? 1-Sim / 2-Nao: ");
    scanf("%d", &gravar);

    if (gravar == 2)
    {
        free(novo);
        gotoxy(7, 23);
        printf("Movimentacao cancelada!                              ");
        getch();
        return NULL;
    }

    if (gravar != 1)
    {
        free(novo);
        gotoxy(7, 23);
        printf("Opcao invalida!                                      ");
        getch();
        return NULL;
    }

    /* validacoes */
    if (novo->conteudo.tp_mov == 1)
    {
        p->conteudo.vl_saldo -= novo->conteudo.vl_movimento;
    }
    else if (novo->conteudo.tp_mov == 2)
    {
        p->conteudo.vl_saldo += novo->conteudo.vl_movimento;
    }
    else
    {
        free(novo);
        gotoxy(7, 23);
        printf("Tipo de movimentacao nao existente!                  ");
        getch();
        return NULL;
    }


    if (LM->inicio == NULL)
    {
        LM->inicio = novo;
    }
    else
    {
        LM->fim->prox = novo;
        
    }
    LM->fim = novo;
    LM->qtd++;

    gotoxy(7, 23);
    printf("Movimentacao realizada!                              ");
    getch();
    return novo;
}