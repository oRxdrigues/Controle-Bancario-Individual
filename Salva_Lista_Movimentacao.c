/*---------------------------------------------------------------------+
|   Autor : Joao Augusto Ferri Camargo                                 |
|   Data: 27/10/2026                                                   |
|   RA: 437262-2026 - JOAO                                             |
|   RA: 441378-2026 - JEAN                                             |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACA |
|   FUNCAO PRINCIPAL DESTA PAGINA - Salva todas as informações de movi |
|   mentações dentro de um arquivo do tipo .dat                        |
+-----------------------------------------------------------------------*/

#include "funcoes.h"

int salva_Lista_Movimentacao(Lista_Movim *LM)
{
    FILE *f;
    TipoItem_movim *aux;

    if (LM == NULL)
    {
        return 0;
    }

    f = fopen("movimentacoes.dat", "wb");

    if (f == NULL)
    {
        gotoxy(7, 23);
        printf("Erro ao abrir o arquivo para salvar as movimentacoes!");
        getch();
        return 0;
    }

    aux = LM->inicio;

    while (aux != NULL)
    {
        if (fwrite(&aux->conteudo, sizeof(reg_movimentacao), 1, f) != 1)
        {
            fclose(f);
            gotoxy(7, 23);
            printf("Erro ao salvar uma movimentacao!                    ");
            getch();
            return 0;
        }

        aux = aux->prox;
    }

    fclose(f);

    return 1;
}