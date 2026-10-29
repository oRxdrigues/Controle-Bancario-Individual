/* ----------------------------------------------------------------------+
|   Autor : Jean Rodrigues de Souza                                      |
|   Data: 27/10/2026                                                     |
|   RA: 437262-2026 - JOAO                                               |
|   RA: 441378-2026 - JEAN                                               |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO |
|   FUNCAO PRINCIPAL DESTA PAGINA - Exibir as mensagens na tela          |
|   solicitando ao usuário os dados bancários para o cadastro da conta.  |
+-----------------------------------------------------------------------*/


#include "funcoes.h"

void telaConta(void)
{

    gotoxy(07, 05);
    printf("Codigo da conta.......: ");

    gotoxy(04, 07);
    printf("1- Banco..............: ");

    gotoxy(04, 9);
    printf("2- Agencia............: ");

    gotoxy(04, 11);
    printf("3- Numero da Conta....: ");

    gotoxy(04, 13);
    printf("4- Tipo da Conta......: ");

    gotoxy(04, 15);
    printf("5- Saldo..............: ");

    gotoxy(04, 17);
    printf("6- Limite.............: ");

    gotoxy(04, 19);
    printf("7- Status Conta.......: ");
}


