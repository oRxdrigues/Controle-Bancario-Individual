/* ----------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                      |
|   Data: 27/10/2026                                                     |
|   RA: 437262-2026 - JOAO                                               |
|   RA: 441378-2026 - JEAN                                               |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO |
|   FUNCAO PRINCIPAL DESTA PAGINA - Inicializa a lista.                  |
+-----------------------------------------------------------------------*/


#include "funcoes.h"

// Inicializa a lista de contas, definindo inicio e fim como NULL
void iniciaContas(Lista_Conta *L)
{
    L->inicio = NULL;
    L->fim = NULL;
    L->qtd = 0;
}