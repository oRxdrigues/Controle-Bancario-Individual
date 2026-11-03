/* ----------------------------------------------------------------------+
|   Autor : Joao Augusto Ferri Camargo                                   |
|   Data: 27/10/2026                                                     |
|   RA: 437262-2026 - JOAO                                               |
|   RA: 441378-2026 - JEAN                                               |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACA  |
|   FUNCAO PRINCIPAL DESTA PAGINA - Incia lista de movimentacao          |
|                                                                        |
+-----------------------------------------------------------------------*/


#include "funcoes.h"

// Inicia a lista definindo inicio e fim como NULL e quantidade como zero
void Inicia_lista_movi(Lista_Movim *LM)
{
    LM->inicio = NULL;
    LM->fim = NULL;
    LM->qtd = 0;
}