#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    int pairs=0;
    int unpaired=0;
    int number=0;

    for(i = 0; i <= 5; i++)
    {
        printf("Write the %d numbers pairs and unpaired \n", i);
        scanf("%d", &number);
        
       if ( number % 2 == 0 )
       {
       pairs++;
       }else{
        unpaired = unpaired + 1;
        unpaired += 1;
        unpaired++;
       }
    }


       printf("Pairs: %d\n", pairs);
       printf("Unpaired: %d\n", unpaired);

    return 0;
}
