
/*---------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                    |
|   Data: 08/11/2026                                                   |
|   RA: 437262-2026 - JOAO                                             |
|   RA: 441378-2026 - JEAN                                             |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO|
|   FUNCAO PRINCIPAL DESTA PAGINA - Carrega as contas do arquivo .dat  |
+---------------------------------------------------------------------*/

#include "funcoes.h"

int ler_Lista_Conta(Lista_Conta *L)
{
    FILE *arquivo;
    reg_contas registro;
    TipoItem_conta *novo;

    if (L == NULL)
    {
        return 0;
    }

    arquivo = fopen("contas.dat", "rb");

    /* Se o arquivo nao existir, a lista permanece vazia. */
    if (arquivo == NULL)
    {
        return 1;
    }

    while (fread(&registro, sizeof(reg_contas), 1, arquivo) == 1)
    {
        novo = (TipoItem_conta *)malloc(sizeof(TipoItem_conta));

        if (novo == NULL)
        {
            fclose(arquivo);
            return 0;
        }

        novo->conteudo = registro;
        novo->prox = NULL;
        novo->ant = L->fim;

        if (L->inicio == NULL)
        {
            L->inicio = novo;
        }
        else
        {
            L->fim->prox = novo;
        }

        L->fim = novo;
        L->qtd++;
    }

    if (ferror(arquivo))
    {
        fclose(arquivo);
        return 0;
    }

    fclose(arquivo);
    return 1;
}
