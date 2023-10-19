#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    int par=0;
    int impar=0;
    int numero=0;
    float mediageral;

    for(i = 0; i <= 5; i++)
    {
        printf("Write the %d numbers pairs and unpaired \n", i);
        scanf("%d", &numero);
        
       if ( numero % 2 == 0 )
       {
       par++;
       }else{
        impar = impar + 1;
        impar += 1;
        impar++;
       }
    }

    mediageral = (par*2) + (impar/2);

       printf("Par: %d\n", par);
       printf("impar: %d\n", impar);
       printf("media geral: %.1f\n", mediageral);

    return 0;
}