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
  int ini;
  int resp;


  TipoItem_conta *p;


  p = L->inicio;


  system("cls");
  tela();
  gotoxy(20, 5);
  printf("Remover Conta Inicio");


  gotoxy(10, 7);
  printf("Codigo: %d", p->conteudo.codigo_conta);
  gotoxy(10, 8);
  printf("Banco: %s", p->conteudo.banco);
  gotoxy(10, 9);
  printf("Agencia: %s", p->conteudo.agencia);
  gotoxy(10, 10);
  printf("Numero da conta: %s", p->conteudo.numero_conta);
  gotoxy(10, 11);
  printf("Tipo: %s", p->conteudo.tipo_conta);
  gotoxy(10, 12);
  printf("Saldo: %.2f", p->conteudo.vl_saldo);
  gotoxy(10, 13);
  printf("Limite: %.2f", p->conteudo.vl_limite);
  gotoxy(10, 14);
  printf("Status: %s", p->conteudo.status);


  // caso nao tenha nenhum no


  if (L->inicio == NULL && L->fim == NULL)
  {
    return;
  }
  // caso tenha somente um no na lista
  else if (L->qtd == 1)
  {
    L->inicio = NULL;
    L->fim = NULL;
   
  }
  else // caso tenha mais de um no na lista
  {
    p = L->inicio;
    L->inicio = p->prox;
   
  }
  gotoxy(10, 17);
  printf("Deseja remover conta? 1-Sim / 2-Nao: ");
  scanf("%d", &resp);
  getch();


  if (resp == 1)
  {
    free(p);
    L->qtd--;
    gotoxy(5, 23);
    printf("Conta removida!");
    getch();
  }
  else if (resp == 2)
  {
    gotoxy(5,23);
    printf("Retornando ao inicio!");
    getch();
    return;
  }
  else
  {
    gotoxy(5,23);
    printf("Resposta invalida!");
    getch();
    return;
  }
}


