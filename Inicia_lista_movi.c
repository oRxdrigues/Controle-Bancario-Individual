#include "funcoes.h"

// Inicializa a lista de contas, definindo inicio e fim como NULL
void Inicia_lista_movi(Lista_Movim *L)
{
    L->inicio = NULL;
    L->fim = NULL;
    L->qtd = 0;
}