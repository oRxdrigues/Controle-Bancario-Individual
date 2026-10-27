/* ----------------------------------------------------------------------+
|   Autor : Joao Augusto Ferri Camargo                                   |
|   RA:437262-2026 - JOAO                                                |
|   RA: - JEAN                                                           |
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
    TipoApontador_conta *prox;
    TipoApontador_conta *ant;
}TipoItem_conta;


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

#endif