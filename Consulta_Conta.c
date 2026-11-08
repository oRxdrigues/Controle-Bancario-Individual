/* ---------------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                           |
|   Data: 30/10/2026                                                          |
|   RA: 437262-2026 - JOAO                                                    |
|   RA: 441378-2026 - JEAN                                                    |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO      |
|   FUNCAO PRINCIPAL DESTA PAGINA - Faz uma consulta de uma conta na lista    |
+----------------------------------------------------------------------------*/



#include "funcoes.h"

void ConsultarConta(Lista_Conta *L)
{
    int pos;
    TipoItem_conta *conta;

    if (L->qtd == 0)
    {
        gotoxy(20, 22);
        printf("Nao existem contas cadastradas!");
        getch();
        return;
    }

    gotoxy(20, 20);
    printf("Digite a posicao da conta: ");
    scanf("%d", &pos);

    conta = busca_Codigo_Conta(L, pos);

    if (conta == NULL)
    {
        gotoxy(20, 22);
        printf("Posicao invalida!");
        getch();
        return;
    }

    system("cls");
    tela();
    gotoxy(20, 5);  printf("CONSULTA DE CONTA");

    gotoxy(10, 7);  printf("Codigo: %d", conta->conteudo.codigo_conta);
    gotoxy(10, 8);  printf("Banco: %s", conta->conteudo.banco);
    gotoxy(10, 9);  printf("Agencia: %s", conta->conteudo.agencia);
    gotoxy(10, 10); printf("Numero da conta: %s", conta->conteudo.numero_conta);
    gotoxy(10, 11); printf("Tipo: %s", conta->conteudo.tipo_conta);
    gotoxy(10, 12); printf("Saldo: %.2f", conta->conteudo.vl_saldo);
    gotoxy(10, 13); printf("Limite: %.2f", conta->conteudo.vl_limite);
    gotoxy(10, 14); printf("Status: %s", conta->conteudo.status);

    gotoxy(10, 17);
    printf("Pressione qualquer tecla para voltar...");
    getch();
}