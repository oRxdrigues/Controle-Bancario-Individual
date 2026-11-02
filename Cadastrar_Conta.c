
/* ---------------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                           |
|   Data: 29/10/2026                                                          |
|   RA: 437262-2026 - JOAO                                                    |
|   RA: 441378-2026 - JEAN                                                    |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO      |
|   FUNCAO PRINCIPAL DESTA PAGINA - Cadastra uma conta na lista               |
+----------------------------------------------------------------------------*/

#include "funcoes.h"

// Cadastra uma nova conta e retorna o elemento criado.
TipoItem_conta *cadastrarConta(void)
{
    TipoItem_conta *novo;
    int gravar;

    // Aloca memoria para a nova conta.
    novo = malloc(sizeof(TipoItem_conta));

    if (novo == NULL)
        return NULL;

    // Inicializa o ponteiro da lista simplesmente encadeada.
    novo->prox = NULL;

    // Exibe a tela de cadastro.
    system("cls");
    tela();
    telaConta();

    // Le os dados da conta.
    gotoxy(31, 5);
    scanf("%d", &novo->conteudo.codigo_conta);

    gotoxy(31, 7);
    scanf(" %49[^\n]", novo->conteudo.banco);

    gotoxy(31, 9);
    scanf(" %9[^\n]", novo->conteudo.agencia);

    gotoxy(31, 11);
    scanf(" %19[^\n]", novo->conteudo.numero_conta);

    gotoxy(31, 13);
    scanf(" %19[^\n]", novo->conteudo.tipo_conta);

    gotoxy(31, 15);
    scanf("%lf", &novo->conteudo.vl_saldo);

    gotoxy(31, 17);
    scanf("%lf", &novo->conteudo.vl_limite);

    gotoxy(31, 19);
    scanf(" %9[^\n]", novo->conteudo.status);

    // Confirma se o usuario deseja gravar a conta.
    gotoxy(5, 23);
    printf("Deseja gravar a conta? 1-Sim / 2-Nao: ");
    scanf("%d", &gravar);

    if (gravar == 1)
        return novo;

    // Libera a memoria se o cadastro for cancelado.
    free(novo);

    gotoxy(6, 23);
    printf("Cadastro cancelado!                                  ");

    return NULL;
}
