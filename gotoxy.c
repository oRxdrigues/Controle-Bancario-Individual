/* ----------------------------------------------------------------------+
|   Autor : Joao Augusto Ferri Camargo                                   |
|   Data: 26/10/2026                                                     |
|   RA: 437262-2026 - JOAO                                               |
|   RA: 441378-2026 - JEAN                                               |
|   CODIGO PRINCIPAL - SISTEMA DE GERENCIAMENTO DE CONTAS E MOVIMENTACAO |
|   FUNCAO PRINCIPAL DESTA PAGINA - REALIZAR AS FUNCOES E DEFINIR AS     |
|   ESTRUTURAS DE DADOS DO SISTEMA                                       |
+-----------------------------------------------------------------------*/

#include "funcoes.h"

//Funcao para definir onde algo fica na tela, utilizando assim como em um plano cartesiano
void gotoxy(int x,int y){
    COORD coord;
    coord.X = (short)x;
    coord.Y = (short)y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}