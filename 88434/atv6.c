#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL, "portuguese");

    int produto;

    printf("Digite o codigo do produto: \n");
    printf("1- Camiseta\n");
    printf("2- Calça\n");
    printf("3-Sapato\n");
    scanf("%d", &produto);

    switch (produto)
    {
    case 1:
    printf("Camiseta no valor de: 15,00 reais");
        
        break;
    
    case 2:
    printf("Calça no valor de: 20,00 reais");
        break;

        case 3:
        printf("Sapato no valor de: 25,00 reais");
    }










}