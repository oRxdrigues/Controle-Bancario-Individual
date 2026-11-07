#include "funcoes.h"

int main()
{   
    Lista_Movim LM;

    tela();
    MenuPrincipal();
    
    if (ler_Mov_Iniciar(&LM) == 0)
    {
        printf("Lista carregada com sucesso!");
        getch();
    }
    else
    {
        printf("Falha ao carregar lista");
        getch();
    }

    getchar();

    return 0;
}