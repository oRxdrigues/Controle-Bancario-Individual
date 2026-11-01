/* ---------------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                           |
|   Data: 01/11/2026                                                          |
|   RA: 437262-2026 - JOAO                                                    |
|   RA: 441378-2026 - JEAN                                                    |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO      |
|   FUNCAO PRINCIPAL DESTA PAGINA - Altera dados de uma conta                 |
+----------------------------------------------------------------------------*/




#include "funcoes.h"

void alterar_Conta(Lista_Conta *L)
{
    int pos;
    TipoItem_conta *conta;

    system("cls");
    tela();

    gotoxy(25, 5);
    printf("ALTERAR CONTA");

    gotoxy(5, 8);
    printf("Digite a posicao da conta: ");
    scanf("%d", &pos);

    conta = obter_Posicao_Conta(L, pos);

    if (conta == NULL)
    {
        gotoxy(5, 10);
        printf("Conta nao encontrada!");
        getch();
        return;
    }

    system("cls");
    tela();

    gotoxy(25, 3);
    printf("ALTERAR CONTA");

    gotoxy(5, 5);
    printf("Codigo da conta: %d", conta->conteudo.codigo_conta);

    gotoxy(5, 7);
    printf("Banco atual: %s", conta->conteudo.banco);
    gotoxy(5, 8);
    printf("Novo banco: ");
    scanf(" %49[^\n]", conta->conteudo.banco);

    gotoxy(5, 9);
    printf("Agencia atual: %s", conta->conteudo.agencia);
    gotoxy(5, 10);
    printf("Nova agencia: ");
    scanf(" %9[^\n]", conta->conteudo.agencia);

    gotoxy(5, 11);
    printf("Numero atual: %s", conta->conteudo.numero_conta);
    gotoxy(5, 12);
    printf("Novo numero: ");
    scanf(" %19[^\n]", conta->conteudo.numero_conta);

    gotoxy(5, 13);
    printf("Tipo atual: %s", conta->conteudo.tipo_conta);
    gotoxy(5, 14);
    printf("Novo tipo: ");
    scanf(" %19[^\n]", conta->conteudo.tipo_conta);

    gotoxy(5, 15);
    printf("Saldo atual: %.2lf", conta->conteudo.vl_saldo);
    gotoxy(5, 16);
    printf("Novo saldo: ");
    scanf("%lf", &conta->conteudo.vl_saldo);

    gotoxy(5, 17);
    printf("Limite atual: %.2lf", conta->conteudo.vl_limite);
    gotoxy(5, 18);
    printf("Novo limite: ");
    scanf("%lf", &conta->conteudo.vl_limite);

    gotoxy(5, 19);
    printf("Status atual: %s", conta->conteudo.status);
    gotoxy(5, 20);
    printf("Novo status: ");
    scanf(" %9[^\n]", conta->conteudo.status);

    gotoxy(5, 22);
    printf("Conta alterada com sucesso!");

    getch();
}
