/* ----------------------------------------------------------------------+
|   Autor : Joao Augusto Ferri Camargo                                   |
|   Data: 26/10/2026                                                     |
|   RA: 437262-2026 - JOAO                                               |
|   RA: 441378-2026 - JEAN                                               |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACA  |
|   FUNCAO PRINCIPAL DESTA PAGINA - REALIZAR AS FUNCOES E DEFINIR AS     |
|   ESTRUTURAS DE DADOS DO SISTEMA                                       |
+-----------------------------------------------------------------------*/


//Serve para incluir tudo que ha dentro do "funcoes.h", bibliotecas, funcoes e etc...
#include "funcoes.h"

//Funcao na qual define como sera a tela(borda)
void tela(void)
{
    int i;

    printf(" +------------------------------------------------------------------------------+");

    gotoxy(1, 1);
    printf("|  UNICIVE");

    gotoxy(24, 1);
    printf("SISTEMA GESTAO DE FUNCIONARIOS");

    gotoxy(62, 1);
    printf("Estrutura de Dados");

    gotoxy(1, 2);
    printf("|");

    gotoxy(1, 3);
    printf("+------------------------------------------------------------------------------+");

    for (i = 2; i < 24; i++)
    {
        gotoxy(1, i);
        printf("|");
    }

    for (i = 1; i < 24; i++)
    {
        gotoxy(80, i);
        printf("|");
    }

    gotoxy(1, 22);
    printf("+------------------------------------------------------------------------------+");

    gotoxy(2, 23);
    printf("MSG");

    gotoxy(1, 24);
    printf("+------------------------------------------------------------------------------+");
}
