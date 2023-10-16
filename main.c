#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");

    int i;

    for(i=0; i<= 15; i++)
    {
        if (i % 1 != 0)
        {
            printf("%d\n", i);
        }
 }


    return 0;
}