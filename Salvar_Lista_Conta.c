
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
    int quantidade = 0;

    // Abre o arquivo para gravacao binaria.
    arquivo = fopen("contas.dat", "wb");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo para salvar as contas!");
        getch();
        return 0;
    }

    // Se a lista for invalida, salva um arquivo vazio.
    if (L != NULL)
    {
        p = L->inicio;

        // Percorre a lista e grava somente os dados de cada conta.
        while (p != NULL)
        {
            if (fwrite(&p->conteudo, sizeof(reg_contas), 1, arquivo) != 1)
            {
                fclose(arquivo);
                printf("Erro ao salvar uma conta!");
                getch();
                return 0;
            }

            quantidade++;
            p = p->prox;
        }
    }

    fclose(arquivo);

    return 1;
}
