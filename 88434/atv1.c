#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL, "portuguese");


    
        float c;

        
        printf("Digite a temperatura: ");
        scanf("%f", &c);

        if (c >= 25)
        {
            printf("O clima est� ensolarado");
            
        }

        else if( c < 15){

            printf("O clima est� chuvoso");



        }

        else{

            printf("O clima est� nublado");


        }


        











        return 0;
}
