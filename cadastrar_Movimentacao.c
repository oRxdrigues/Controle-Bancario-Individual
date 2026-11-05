/* ----------------------------------------------------------------------+
| Autor: Jean Rodrigues de Souza                                         |
| Data atualizada: 05/11/2026                                            |
| RA 437262-2026 - JOAO                                                  |
| RA 441378-2026 - JEAN                                                  |
| CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO    |
| Funcao: Cadastra uma movimentacao financeira                           |
+------------------------------------------------------------------------*/

#include "funcoes.h"

TipoItem_movim *cadastrar_movimentacao(Lista_Movim *LM, Lista_Conta *L2, char *tipo)
{
    TipoItem_movim *novo;
    TipoItem_conta *p;
    int codigo;
    int gravar;

    novo = malloc(sizeof(TipoItem_movim));

    if (novo == NULL)
    {
        printf("Erro ao alocar memoria!");
        getch();
        return NULL;
    }

    novo->prox = NULL;

    system("cls");
    tela();
    tela_Movimentacao();

    gotoxy(31, 5);
    printf("%d", LM->qtd + 1);

    gotoxy(31, 7);
    scanf("%d", &codigo);

    p = busca_Codigo_Conta(L2, codigo);

    if (p == NULL)
    {
        printf("\nConta nao encontrada!");
        free(novo);
        getch();
        return NULL;
    }

    novo->conteudo.sequencial = LM->qtd + 1;
    novo->conteudo.codigo_conta = codigo;

    gotoxy(31, 9);
    scanf("%10s", novo->conteudo.data_mov);

    gotoxy(31, 11);
    strcpy(novo->conteudo.tp_mov, tipo);
    printf("%s", novo->conteudo.tp_mov);

    gotoxy(31, 13);
    scanf(" %49[^\n]", novo->conteudo.ds_favorecido);

    gotoxy(31, 15);
    scanf("%lf", &novo->conteudo.vl_movimento);

    if (novo->conteudo.vl_movimento <= 0)
    {
        printf("\nValor invalido!");
        free(novo);
        getch();
        return NULL;
    }

    if (strcmp(tipo, "Credito") == 0)
    {
        novo->conteudo.vl_saldo =
            p->conteudo.vl_saldo + novo->conteudo.vl_movimento;
    }
    else
    {
        if (p->conteudo.vl_saldo - novo->conteudo.vl_movimento <
            -p->conteudo.vl_limite)
        {
            printf("\nSaldo e limite insuficientes!");
            free(novo);
            getch();
            return NULL;
        }

        novo->conteudo.vl_saldo =
            p->conteudo.vl_saldo - novo->conteudo.vl_movimento;
    }

    
    gotoxy(31, 17);
    printf("%.2f", novo->conteudo.vl_saldo);

    gotoxy(7, 23);
    printf("Deseja gravar a movimentacao? 1-Sim / 2-Nao: ");
    scanf("%d", &gravar);

    if (gravar != 1)
    {
        gotoxy(7, 23);
        printf("Movimentacao cancelada!                         ");
        free(novo);
        getch();
        return NULL;
    }

    p->conteudo.vl_saldo = novo->conteudo.vl_saldo;

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
    printf("Movimentacao cadastrada!                        ");
    getch();

    return novo;
}