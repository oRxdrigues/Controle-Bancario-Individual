/* ----------------------------------------------------------------------+
|   Autor : Joao Augusto Ferri Camargo - Jean Rodrigues de Souza         |
|   Data: 26/10/2026 - 27/10/2026                                        |
|   RA: 437262-2026 - JOAO                                               |
|   RA: 441378-2026 - JEAN                                               |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO |
|   FUNCAO PRINCIPAL DESTA PAGINA - REALIZAR AS FUNCOES E DEFINIR AS     |
|   ESTRUTURAS DE DADOS DO SISTEMA                                       |
+-----------------------------------------------------------------------*/


#ifndef FUNCOES_H
#define FUNCOES_H

//Bibliotecas necessarias para o sistema
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>


//Define estrutura das contas
typedef struct 
{
int codigo_conta;
char banco[50];
char agencia[10]; //Codigo da agencia bancaria
char numero_conta[20]; 
char tipo_conta[20]; //Corrente, poupanca ou credito
double vl_saldo; 
double vl_limite; //Pode ter limite negativo
char status[10]; //ativo ou nativo
} reg_contas;

typedef struct TipoItem_conta *TipoApontador_conta;
//Lista Duplamente Encadeada
typedef struct TipoItem_conta
{
    reg_contas conteudo;
    TipoApontador_conta prox;
    TipoApontador_conta ant;
}TipoItem_conta;

// Define a estrutura que controla a lista de contas, inicio, fim e a quantidade de nós
typedef struct 
{
    TipoItem_conta *inicio;
    TipoItem_conta *fim;
    int qtd;
}Lista_Conta;



//Define estrutura dos movimentos
typedef struct 
{
    int sequencial; //Id da movim
    int codigo_conta;
    char data_mov[11];
    char tp_mov[15]; //credito ou debito 
    char ds_favorecido[50]; //Empresa ou Pessoa que recebera
    double vl_movimento;
    double vl_saldo;
}reg_movimentacao;

typedef struct TipoItem_movim *TipoApontador_movim;

//Lista simplesmente encadeada
typedef struct TipoItem_movim
{
    reg_movimentacao conteudo;
    TipoApontador_movim *prox;
}TipoItem_movim;

void gotoxy(int x, int y);

void tela();

void telaConta();

void iniciaListaContas(Lista_Conta *L);

TipoItem_conta *obter_Posicao_Conta(Lista_Conta *L, int pos);

TipoItem_conta *busca_Codigo_Conta(Lista_Conta *L, int codigo);

void inserir_Inicio_Conta(Lista_Conta *L, TipoItem_conta *novo);

void inserir_Final_Conta(Lista_Conta *L, TipoItem_conta *novo);

int inserir_Posicao_Conta(Lista_Conta *L, TipoItem_conta *novo, int pos);



#endif