
/* ---------------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                           |
|   Data: 02/11/2026                                                          |
|   RA: 437262-2026 - JOAO                                                    |
|   RA: 441378-2026 - JEAN                                                    |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO      |
|   FUNCAO PRINCIPAL DESTA PAGINA - Cadastra uma conta na lista               |
+----------------------------------------------------------------------------*/

#include "funcoes.h"

// Cadastra os dados de uma nova conta e retorna o elemento criado.
TipoItem_conta *cadastrarConta(void)
{
    TipoItem_conta *novo;
    int gravar;

    // Aloca memoria para armazenar a nova conta.
    novo = malloc(sizeof(TipoItem_conta));

    // Verifica se a memoria foi alocada corretamente.
    if (novo == NULL)
        return NULL;

    // Inicializa o ponteiro do novo elemento.
    novo->prox = NULL;

    // Exibe a tela de cadastro.
    system("cls");
    tela();
    telaConta();

    // Le o codigo da conta.
    gotoxy(31, 5);
    scanf("%d", &novo->conteudo.codigo_conta);

    // Le o nome do banco.
    gotoxy(31, 7);
    scanf(" %49[^\n]", novo->conteudo.banco);

    // Le a agencia bancaria.
    gotoxy(31, 9);
    scanf(" %9[^\n]", novo->conteudo.agencia);

    // Le o numero da conta.
    gotoxy(31, 11);
    scanf(" %19[^\n]", novo->conteudo.numero_conta);

    // Le o tipo da conta.
    gotoxy(31, 13);
    scanf(" %19[^\n]", novo->conteudo.tipo_conta);

    // Le o saldo da conta.
    gotoxy(31, 15);
    scanf("%lf", &novo->conteudo.vl_saldo);

    // Le o limite da conta.
    gotoxy(31, 17);
    scanf("%lf", &novo->conteudo.vl_limite);

    // Le o status da conta.
    gotoxy(31, 19);
    scanf(" %9[^\n]", novo->conteudo.status);

    // Confirma se o usuario deseja gravar o cadastro.
    gotoxy(5, 23);
    printf("Deseja gravar a conta? 1-Sim / 2-Nao: ");
    scanf("%d", &gravar);

    // Retorna a nova conta se o cadastro for confirmado.
    if (gravar == 1)
        return novo;

    // Libera a memoria se o cadastro for cancelado.
    free(novo);

    gotoxy(6, 23);
    printf("Cadastro cancelado!                                  ");

    return NULL;
}
