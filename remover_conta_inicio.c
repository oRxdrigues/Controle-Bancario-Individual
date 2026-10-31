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
  int conta;

  conta = L->incio;

    system("cls");
    tela();
    gotoxy(20, 5);  printf("remover");

    gotoxy(10, 7);  printf("Codigo: %d", conta->conteudo.codigo_conta);
    gotoxy(10, 8);  printf("Banco: %s", conta->conteudo.banco);
    gotoxy(10, 9);  printf("Agencia: %s", conta->conteudo.agencia);
    gotoxy(10, 10); printf("Numero da conta: %s", conta->conteudo.numero_conta);
    gotoxy(10, 11); printf("Tipo: %s", conta->conteudo.tipo_conta);
    gotoxy(10, 12); printf("Saldo: %.2f", conta->conteudo.vl_saldo);
    gotoxy(10, 13); printf("Limite: %.2f", conta->conteudo.vl_limite);
    gotoxy(10, 14); printf("Status: %s", conta->conteudo.status);

    gotoxy(10, 17);
    printf("Pressione qualquer tecla para voltar...");
    getch();

  // caso nao tenha nenhum no
  if (L->inicio == NULL)
  {
    return;
  }
  // caso tenha somente um no na lista
  if (L->qtd == 1)
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
