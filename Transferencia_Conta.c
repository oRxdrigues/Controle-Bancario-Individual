/* ----------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                      |
|   Data: 03/11/2026                                                     |
|   RA: 437262-2026 - JOAO                                               |
|   RA: 441378-2026 - JEAN                                               |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO |
|   FUNCAO PRINCIPAL DESTA PAGINA - Realiza transferencia entre contas.  |
+-----------------------------------------------------------------------*/

#include "funcoes.h"

void Transferencia_Contas(Lista_Conta *L)
{
    TipoItem_conta *origem;
    TipoItem_conta *destino;
    int codigo_origem, codigo_destino;
    double valor;

    system("cls");
    tela();

    gotoxy(25, 3);
    printf("TRANSFERENCIA ENTRE CONTAS");

    gotoxy(4, 5);
    printf("CONTA DE ORIGEM");

    gotoxy(43, 5);
    printf("CONTA DE DESTINO");

    gotoxy(4, 7);
    printf("Codigo: ");
    scanf("%d", &codigo_origem);

    origem = busca_Codigo_Conta(L, codigo_origem);

    if (origem == NULL)
    {
        gotoxy(4, 20);
        printf("Conta de origem nao encontrada!");
        getch();
        return;
    }

    gotoxy(4, 8);
    printf("Banco: %s", origem->conteudo.banco);

    gotoxy(4, 9);
    printf("Agencia: %s", origem->conteudo.agencia);

    gotoxy(4, 10);
    printf("Numero: %s", origem->conteudo.numero_conta);

    gotoxy(4, 11);
    printf("Tipo: %s", origem->conteudo.tipo_conta);

    gotoxy(4, 12);
    printf("Saldo: R$ %.2f", origem->conteudo.vl_saldo);

    gotoxy(4, 13);
    printf("Limite: R$ %.2f", origem->conteudo.vl_limite);

    gotoxy(4, 14);
    printf("Status: %s", origem->conteudo.status);

    gotoxy(43, 7);
    printf("Codigo: ");
    scanf("%d", &codigo_destino);

    destino = busca_Codigo_Conta(L, codigo_destino);

    if (destino == NULL)
    {
        gotoxy(4, 20);
        printf("Conta de destino nao encontrada!");
        getch();
        return;
    }

    if (origem == destino)
    {
        gotoxy(4, 20);
        printf("As contas devem ser diferentes!");
        getch();
        return;
    }

    gotoxy(43, 8);
    printf("Banco: %s", destino->conteudo.banco);

    gotoxy(43, 9);
    printf("Agencia: %s", destino->conteudo.agencia);

    gotoxy(43, 10);
    printf("Numero: %s", destino->conteudo.numero_conta);

    gotoxy(43, 11);
    printf("Tipo: %s", destino->conteudo.tipo_conta);

    gotoxy(43, 12);
    printf("Saldo: R$ %.2f", destino->conteudo.vl_saldo);

    gotoxy(43, 13);
    printf("Limite: R$ %.2f", destino->conteudo.vl_limite);

    gotoxy(43, 14);
    printf("Status: %s", destino->conteudo.status);

    gotoxy(4, 17);
    printf("Valor da transferencia: R$ ");
    scanf("%lf", &valor);

    if (valor <= 0 || valor > origem->conteudo.vl_saldo)
    {
        gotoxy(4, 20);
        printf("Valor invalido ou saldo insuficiente!");
        getch();
        return;
    }

    origem->conteudo.vl_saldo -= valor;
    destino->conteudo.vl_saldo += valor;

    gotoxy(4, 19);
    printf("Transferencia realizada com sucesso!");

    gotoxy(4, 21);
    printf("Novo saldo origem: R$ %.2f",
           origem->conteudo.vl_saldo);

    gotoxy(43, 21);
    printf("Novo saldo destino: R$ %.2f",
           destino->conteudo.vl_saldo);

    getch();
}