/* ----------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                      |
|   Data: 03/11/2026                                                     |
|   RA: 437262-2026 - JOAO                                               |
|   RA: 441378-2026 - JEAN                                               |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO |
|   FUNCAO PRINCIPAL DESTA PAGINA - Consulta movimentacoes por conta.    |
+-----------------------------------------------------------------------*/

#include "funcoes.h"

void Consulta_Movi(Lista_Movim *LM, Lista_Conta *L)
{
    TipoItem_movim *p;
    int codigo, i = 0;

    system("cls");
    tela();

    gotoxy(25, 3);
    printf("CONSULTA DE MOVIMENTACOES");

    gotoxy(4, 6);
    printf("Digite o codigo da conta: ");
    scanf("%d", &codigo);

    if (busca_Codigo_Conta(L, codigo) == NULL)
    {
        gotoxy(4, 20);
        printf("Conta nao encontrada!");
        getch();
        return;
    }

    gotoxy(2, 8);
    printf("SEQ");

    gotoxy(8, 8);
    printf("CONTA");

    gotoxy(17, 8);
    printf("DATA");

    gotoxy(27, 8);
    printf("TIPO");

    gotoxy(37, 8);
    printf("FAVORECIDO");

    gotoxy(53, 8);
    printf("VALOR");

    gotoxy(66, 8);
    printf("SALDO");

    for (p = LM->inicio; p != NULL; p = p->prox)
    {
        if (p->conteudo.codigo_conta == codigo)
        {
            gotoxy(2, 10 + i);
            printf("%d", p->conteudo.sequencial);

            gotoxy(8, 10 + i);
            printf("%d", p->conteudo.codigo_conta);

            gotoxy(17, 10 + i);
            printf("%s", p->conteudo.data_mov);

            gotoxy(27, 10 + i);
            printf("%s", p->conteudo.tp_mov);

            gotoxy(37, 10 + i);
            printf("%s", p->conteudo.ds_favorecido);

            gotoxy(53, 10 + i);
            printf("R$ %.2f", p->conteudo.vl_movimento);

            gotoxy(66, 10 + i);
            printf("R$ %.2f", p->conteudo.vl_saldo);

            i++;
        }
    }

    if (i == 0)
    {
        gotoxy(4, 10);
        printf("Nenhuma movimentacao encontrada!");
    }

    getch();
}