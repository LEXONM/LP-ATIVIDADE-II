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
            printf("O clima está ensolarado");
            
        }

        else if( c < 15){

            printf("O clima está chuvoso");



        }

        else{

            printf("O clima está nublado");


        }


        











        return 0;
}
