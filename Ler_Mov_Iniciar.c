
/*---------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                    |
|   Data: 08/11/2026                                                   |
|   RA: 437262-2026 - JOAO                                             |
|   RA: 441378-2026 - JEAN                                             |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO|
|   FUNCAO PRINCIPAL DESTA PAGINA - Carrega as movimentacoes do .dat   |
+---------------------------------------------------------------------*/

#include "funcoes.h"

int ler_Mov_Iniciar(Lista_Movim *LM)
{
    FILE *f;
    reg_movimentacao registro;
    TipoItem_movim *novo;

    if (LM == NULL)
    {
        return 0;
    }

    f = fopen("movimentacoes.dat", "rb");

    /* Se o arquivo ainda nao existir, a lista permanece vazia. */
    if (f == NULL)
    {
        return 1;
    }

    while (fread(&registro, sizeof(reg_movimentacao), 1, f) == 1)
    {
        novo = (TipoItem_movim *)malloc(sizeof(TipoItem_movim));

        if (novo == NULL)
        {
            fclose(f);
            return 0;
        }

        novo->conteudo = registro;
        novo->prox = NULL;

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
    }

    if (ferror(f))
    {
        fclose(f);
        return 0;
    }

    fclose(f);
    return 1;
}
