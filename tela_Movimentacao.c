/*---------------------------------------------------------------------+
|   Autor : Joao Augusto Ferri Camargo                                   |
|   Data: 27/10/2026                                                     |
|   RA: 437262-2026 - JOAO                                               |
|   RA: 441378-2026 - JEAN                                               |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACA  |
|   FUNCAO PRINCIPAL DESTA PAGINA - Exibir as mensagens na tela          |
|   solicitando ao usuário os dados da movimentacao.                     |
+-----------------------------------------------------------------------*/


#include "funcoes.h"


void tela_Movimentacao(void)
{


    gotoxy(04, 05);
    printf("Sequencial............: ");


    gotoxy(04, 07);
    printf("Codigo_conta..........: ");


    gotoxy(04, 9);
    printf("Data de movimentacao..: ");


    gotoxy(04, 11);
    printf("Tipo de movimentacao(1 - Debito \ 2 - credito): ");


    gotoxy(04, 13);
    printf("Favorecido.............: ");


    gotoxy(04, 15);
    printf("Valor da movimentacao.: ");


    gotoxy(04, 17);
    printf("Saldo.................: ");


}
