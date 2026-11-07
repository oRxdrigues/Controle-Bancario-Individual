/*---------------------------------------------------------------------+
|   Autor : Joao Augusto Ferri Camargo                                   |
|   Data: 27/10/2026                                                     |
|   RA: 437262-2026 - JOAO                                               |
|   RA: 441378-2026 - JEAN                                               |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACA  |
|   FUNCAO PRINCIPAL DESTA PAGINA - Incia o programa lendo ou criando o  |
|    arquivo dat                                                         |
+-----------------------------------------------------------------------*/

#include "funcoes.h"

int ler_Mov_Iniciar(Lista_Movim *LM)
{

    FILE *f;
    reg_movimentacao registro;
    TipoItem_movim *novo;

    LM->inicio = NULL;
    LM->fim = NULL;
    LM->qtd = 0;

    f = fopen("movimentacoes.dat", "rb");
    if (f == NULL)
    {

        return 0;
    }

    while (fread(&registro, sizeof(reg_movimentacao), 1, f) != 0)
    {
        novo = (TipoItem_movim *)malloc(sizeof(TipoItem_movim));
        if (novo == NULL)
        {
            fclose(f);
            return 1;
        }

        novo->conteudo = registro;
        novo->prox = NULL;

        if (LM->inicio == NULL)
        {
            LM->inicio = novo;
            LM->fim = novo;
        }
        else
        {
            LM->fim->prox = novo;
            LM->fim = novo;
        }

        LM->qtd++;
    }

    fclose(f);
    return 0;
}