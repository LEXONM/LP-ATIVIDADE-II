#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL, "portuguese");

    int pc;

    printf("Escolha a opção. \n");
    printf("1- Novo jogo.\n");
    printf("2- Carregar jogo.\n");
    printf("3- Configurações.\n");
    scanf("%d", &pc);

    switch (pc)
    {
    case 1:
    printf("Iniciando novo jogo");
        
        break;
    
    case 2:
    printf("Jogo está carregando...");
        break;

        case 3:
        printf("Abrindo configurações");
    }










}