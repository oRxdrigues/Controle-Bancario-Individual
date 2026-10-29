/* ----------------------------------------------------------------------+
|   Autor : Joao Augusto Ferri Camargo                                   |
|   Data: 26/10/2026                                                     |
|   RA: 437262-2026 - JOAO                                               |
|   RA: 441378-2026 - JEAN                                               |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACA  |
|   FUNCAO PRINCIPAL DESTA PAGINA - REALIZAR REMOCAO DE CONTA NO INICIO  |
|   DA LISTA                                                             |
+-----------------------------------------------------------------------*/

#include "funcoes.h"

void remover_conta_inicio(Lista_Conta *L)
{

  TipoItem_conta *p;

  // caso nao tenha nenhum no
  if (L->inicio == NULL)
  {
    return;
  }
  // caso tenha somente um no na lista
  if (L->inicio == L->fim)
  {

    free(L->inicio);
    L->inicio = NULL;
    L->fim = NULL;
  }
  else // caso tenha mais de um no na lista
  {
    p = L->inicio;
    L->inicio = p->prox;
    free(p);
    L->inicio->ant = NULL;
  }
}
