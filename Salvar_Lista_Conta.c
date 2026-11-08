/* ----------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                      |
|   Data: 02/11/2026                                                     |
|   RA: 437262-2026 - JOAO                                               |
|   RA: 441378-2026 - JEAN                                               |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO |
|   FUNCAO PRINCIPAL DESTA PAGINA - Salva a lista de contas em arquivo   |
+-----------------------------------------------------------------------*/

#include "funcoes.h"

// Salva os dados de todas as contas em um arquivo binario .dat.
int salvar_Lista_Conta(Lista_Conta *L)
{
    FILE *arquivo;
    TipoItem_conta *p;

    // Se a lista for invalida, cancela antes de sobrescrever o arquivo
    if (L == NULL)
    {
        return 0;
    }

    // Abre o arquivo para gravacao binaria.
    arquivo = fopen("contas.dat", "wb");

    if (arquivo == NULL)
    {
        gotoxy(7, 23);
        printf("Erro ao abrir o arquivo para salvar as contas!");
        getch();
        return 0;
    }

    p = L->inicio;

    // Percorre a lista e grava somente os dados de cada conta.
    while (p != NULL)
    {
        if (fwrite(&p->conteudo, sizeof(reg_contas), 1, arquivo) != 1)
        {
            fclose(arquivo);
            gotoxy(7, 23);
            printf("Erro ao salvar uma conta!                     ");
            getch();
            return 0;
        }

        p = p->prox;
    }

    fclose(arquivo);

    return 1;
}